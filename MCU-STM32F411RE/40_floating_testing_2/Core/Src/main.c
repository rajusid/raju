#include "stm32f4xx.h"
#include "stdio.h"
#include "string.h"

#define UART_TX_BUFFER_SIZE 100

float temperature;
float value;

void UART_Init(void)
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;    // Enable GPIOC clock
    RCC->APB2ENR |= RCC_APB2ENR_USART6EN;   // Enable USART6 clock

    // Configure PC6 for USART6_TX
    GPIOC->AFR[0] &= ~GPIO_AFRL_AFSEL6;     // Clear alternate function bits
    GPIOC->AFR[0] |= GPIO_AFRL_AFSEL6_2 | GPIO_AFRL_AFSEL6_1 | GPIO_AFRL_AFSEL6_0; // Set alternate function 8 for USART6_TX

    GPIOC->MODER &= ~GPIO_MODER_MODE6;      // Clear mode bits
    GPIOC->MODER |= GPIO_MODER_MODE6_1;     // Set alternate function mode for PC6

    USART6->BRR = (uint32_t)(SystemCoreClock / 115200);  // 115200 baud @ 16 MHz
    USART6->CR1 = USART_CR1_TE;             // Enable transmitter
    USART6->CR2 = 0x0000;                   // 1 stop bit
    USART6->CR3 = 0x0000;                   // No flow control
    USART6->CR1 |= USART_CR1_UE;            // Enable USART6
}

void UART_TransmitString(const char* str)
{
    for (uint32_t i = 0; i < strlen(str); i++)
    {
        // Wait until USART6 transmit buffer is empty
        while (!(USART6->SR & USART_SR_TXE));

        // Write the character to the USART6 data register
        USART6->DR = (str[i] & 0xFF);
    }
}


void UART_TransmitFloat(float value)
{
    char buffer[UART_TX_BUFFER_SIZE];

    sprintf(buffer, UART_TX_BUFFER_SIZE, "%.2f", value);
//    sprintf(buffer, "%.2f", value);

    // Transmit the string over UART6
    UART_TransmitString(buffer);
}

int main(void)
{
    // Initialize UART6 and other peripherals
    UART_Init();

    temperature = 25.5;

    while (1)
    {
        // Transmit the floating-point value over UART6
        UART_TransmitFloat(temperature);

        // Other code...

        // Delay between transmissions
        for (volatile uint32_t i = 0; i < 1000000; i++);
    }
}
