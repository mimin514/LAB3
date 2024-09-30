/*
 * timer.c
 *
 *  Created on: Sep 30, 2024
 *      Author: User
 */


#include "main.h"
#include "input_reading.h"
 void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
 {
	 if(htim->Instance == TIM2){
		 button_reading();
	 }
 }
