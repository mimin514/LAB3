/*
 * led_display.c
 *
 *  Created on: Sep 30, 2024
 *      Author: User
 */

#include "led_display.h"
int count=0,cnt=0;
void led_red_blink(){
	HAL_GPIO_TogglePin(red1_GPIO_Port, red1_Pin);
	HAL_GPIO_TogglePin(red2_GPIO_Port, red2_Pin);
	HAL_Delay(500);
	HAL_GPIO_TogglePin(red1_GPIO_Port, red1_Pin);
	HAL_GPIO_TogglePin(red2_GPIO_Port, red2_Pin);
	HAL_Delay(500);
	HAL_GPIO_TogglePin(red1_GPIO_Port, red1_Pin);
	HAL_GPIO_TogglePin(red2_GPIO_Port, red2_Pin);
	HAL_Delay(500);
}
void led_green_blink(){
	HAL_GPIO_TogglePin(red1_GPIO_Port, red1_Pin);
	HAL_GPIO_TogglePin(red2_GPIO_Port, red2_Pin);
	HAL_Delay(500);
}
void led_yellow_blink(){
	HAL_GPIO_TogglePin(red1_GPIO_Port, red1_Pin);
	HAL_GPIO_TogglePin(red2_GPIO_Port, red2_Pin);
	HAL_Delay(500);
}
