#include "FreeRTOS.h"
#include "task.h"
#include "stm32f4xx_hal.h"

TaskHandle_t task1_handle;
TaskHandle_t task2_handle;

void Task1(void *pvParameters) {
    // Initialize GPIO for LED
    __HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = GPIO_PIN_5;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    while (1) {
        // Turn on the LED
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);

        // Delay for 1 second
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}

void Task2(void *pvParameters) {
    // Initialize GPIO for LED
    __HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = GPIO_PIN_5;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    while (1) {
        // Turn off the LED
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);

        // Delay for 1 second
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

int main(void) {
    // Initialize HAL and other peripherals as required

    // Create Task 1
    xTaskCreate(Task1, "Task 1", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1, &task1_handle);

    // Create Task 2
    xTaskCreate(Task2, "Task 2", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1, &task2_handle);

    // Start the FreeRTOS scheduler
    vTaskStartScheduler();

    // The scheduler should never return, but if it does, handle the error
    while (1) {
        // Error handling code here
    }
}
