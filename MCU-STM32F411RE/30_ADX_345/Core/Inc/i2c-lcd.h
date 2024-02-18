/*
 * i2c-lcd.h
 *
 *  Created on: May 10, 2023
 *      Author: dinesh
 */

#ifndef SRC_I2C_LCD_H_
#define SRC_I2C_LCD_H_
#include "stm32f4xx_hal.h"

void lcd_init (void);   // initialize lcd

void lcd_send_cmd (char cmd);  // send command to the lcd

void lcd_send_data (char data);  // send data to the lcd

void lcd_send_string (char *str);  // send string to the lcd

void lcd_send_float (float data, int numberofdigits);  // display float numbers on lcd



#endif /* SRC_I2C_LCD_H_ */
