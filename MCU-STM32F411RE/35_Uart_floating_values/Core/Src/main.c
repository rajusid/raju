#include "stm32f4xx.h"
#include "stdio.h"
#include "string.h"

#define UART_TX_BUFFER_SIZE 100

float temperature;
float value;

void UART_Init(void)
{
    RCC->AHB1ENR |= 1;   // Enable GPIOA clock
    RCC->APB1ENR |= 0x20000;  // Enable USART2 clock

    // Configure PA2 for USART2_TX
    GPIOA->AFR[0] &= ~0x0F00;     // Clear alternate function bits
    GPIOA->AFR[0] |= 0x0700; // Set alternate function 7 for USART2_TX

    GPIOA->MODER &= ~0x0030;     // Clear mode bits
    GPIOA->MODER |= 0x0020;    // Set alternate function mode for PA2

    USART2->BRR = 0x0683;                  // 9600 baud @ 16 MHz
    USART2->CR1 = 0x0008;            // Enable transmitter
    USART2->CR2 = 0x0000;                  // 1 stop bit
    USART2->CR3 = 0x0000;                  // No flow control
    USART2->CR1 |= 0x2000;           // Enable USART2
}

void UART_TransmitString(const char* str)
{
    for (uint32_t i = 0; i < strlen(str); i++)
    {
        // Wait until UART2 transmit buffer is empty
        while (!(USART2->SR & 0x0080));

        // Write the character to the UART2 data register
        USART2->DR = (str[i] & 0xFF);

    }
}

void UART_TransmitFloat(float value)
{
    char buffer[UART_TX_BUFFER_SIZE];

    // Convert the floating-point value to a string
    sprintf(buffer, "%.2f", value);

    // Transmit the string over UART2
    UART_TransmitString(buffer);
}

int main(void)
{
    // Initialize UART2 and other peripherals
    UART_Init();

    temperature = 25.5;

    while (1)
    {
        // Transmit the floating-point value over UART2
        UART_TransmitFloat(temperature);

        // Other code...

        // Delay between transmissions
        for (volatile uint32_t i = 0; i < 1000000; i++);
    }
}
