#include "stm32f4xx.h"
#include "stdio.h"
#include "string.h"

#define UART_TX_BUFFER_SIZE 100

float temperature;
float value;

void UART_Init(void)
{
    RCC->AHB1ENR |= 1;   // Enable GPIOA clock
    RCC->APB2ENR |= (1<<5);  // Enable USART6 clock

    // Configure GPIO for USART6_TX
    GPIOC->AFR[0] &= ~0x0000F000;                   // Clear alternate function bits
    GPIOC->AFR[0] |=  0x00008000;                    // Set alternate function 8 for USART6_TX

    GPIOC->MODER &= ~0x3000;     // Clear mode bits
    GPIOC->MODER |=  0x2000;    // Set alternate function mode for PC6

    USART6->CR1 = (1<<3);            // Enable transmitter
    USART6->BRR = 0x008B;                  // 115200 baud @ 16 MHz
    USART6->CR2 = 0x0000;                  // 1 stop bit
    USART6->CR3 = 0x0000;                  // No flow control
    USART6->CR1 |= (1<<13);           // Enable USART6
}

void UART_TransmitString(const char* str)
{
    for (uint32_t i = 0; i < strlen(str); i++)
    {
        // Wait until USART6 transmit buffer is empty
        while (!(USART6->SR & (1<<7)));

        // Write the character to the USART6 data register
        USART6->DR = (str[i] & 0xFF);
    }
}

void UART_TransmitFloat(float value)
{
    char buffer[UART_TX_BUFFER_SIZE];

    // Convert the floating-point value to a string
    sprintf(buffer, "%.2f", value);

    // Transmit the string over USART6
    UART_TransmitString(buffer);
}

int main(void)
{
    // Initialize UART6 and other peripherals
    UART_Init();

    float temperature = 25.5;

    while (1)
    {
        // Transmit the floating-point value over USART6
        UART_TransmitFloat(temperature);

        // Other code...

        // Delay between transmissions
        for (volatile uint32_t i = 0; i < 1000000; i++);
    }
}

