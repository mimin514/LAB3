/*
 * timer.c
 *
 *  Created on: Sep 30, 2024
 *      Author: User
 */


#include "main.h"
#include "input_reading.h"

 #include "timer.h"
 #include "led7.h"

 #define NUM_TIMERS 10  // Number of timers you want to handle
 #define TICK 10
 int timer_flag[NUM_TIMERS];  // Timer flags for each timer
 int timer_counter[NUM_TIMERS];  // Timer counters for each timer

 void setTimer(int timer_id, int duration)
 {
 	if (timer_id >= 0 && timer_id < NUM_TIMERS)
 	    {
 	        timer_counter[timer_id] = duration / TICK;
 	        timer_flag[timer_id] = 0;
 	    }
 }
 void timerRun(void)
 {
     for (int i = 0; i < NUM_TIMERS; i++)
     {
         if (timer_counter[i] >= 0)
         {
             timer_counter[i]--;  // Decrease the counter

             if (timer_counter[i] <= 0)
             {
                 timer_flag[i] = 1;  // Timer expired
                 // Optional: Trigger a specific action for timer expiration
             }
         }
     }
 }

 void HAL_TIM_PeriodElapsedCallback (TIM_HandleTypeDef *htim)
 {
 	if (htim->Instance == TIM2){
 	        timerRun();

 	        if (timer_flag[0] == 1){
 	        	//button_reading();
 	            setTimer(0, 1000);
 	        }
//
// 	        if (timer_flag[1] == 1){
// 	        	display2number(1,12);
// 	            setTimer(1,500);
// 	        }
// 	       if (timer_flag[2] == 1){
// 	    	 // counttime();
// 	        	            setTimer(2,1000);
// 	        	        }
 	    }
 	}
