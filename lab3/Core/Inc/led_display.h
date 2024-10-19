/*
 * led_display.h
 *
 *  Created on: Sep 30, 2024
 *      Author: User
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"
void updatemode(int modee);
void display2number(int num1,int num2);

void normalstate();
void timeledlight();

void modify_red_duration();
void modify_yellow_duration();
void modify_green_duration();

#endif /* INC_LED_DISPLAY_H_ */
