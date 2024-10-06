/*
 * led7.h
 *
 *  Created on: Sep 10, 2024
 *      Author: User
 */

#ifndef INC_LED7_H_
#define INC_LED7_H_
#include "main.h"

void display1(int num);
void display2(int num);

void display1to9(void);
void display_2_1to9(void);

void display1_run(void);
void display2_run(void);
void update7SEG(int index);
void runled7();
void selectpos(int pos);
void display2number(int num1,int num2);
void led_run(void);
void display_time(int num);
void showstate(int num1,int num2);
#endif /* INC_LED7_H_ */
