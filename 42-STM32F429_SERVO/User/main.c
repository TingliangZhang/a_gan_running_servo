/**
 *	Keil project for RC Servo example
 *
 *	Before you start, select your target, on the right of the "Load" button
 *
 *	@author		Tilen Majerle
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.com
 *	@ide		Keil uVision 5
 *	@packs		STM32F4xx Keil packs version 2.2.0 or greater required
 *	@stdperiph	STM32F4xx Standard peripheral drivers version 1.4.0 or greater required
 */
/* Include core modules */
#include "stm32f4xx.h"
/* Include my libraries here */
#include "defines.h"
#include "tm_stm32f4_delay.h"
#include "tm_stm32f4_servo.h"
#include "tm_stm32f4_rng.h"

	/* Servo structs */
	TM_SERVO_t Servo1;

void zero(float d);

int main(void) {
	
	/* Initialize system */
	SystemInit();
	
	/* Initialize delay */
	TM_DELAY_Init();
	
	//PD15 PA1 PA2 PA8 PA9 PC8  PA10 PC6 PC7 PC8     ≤ªƒ‹”√
	//4294967295
	TM_RNG_Init();
	
	float a=0;
	
	/* Initialize servo 1, TIM2, Channel 1, Pinspack 2 = PA5 */
	TM_SERVO_Init(&Servo1, TIM2, TM_PWM_Channel_1, TM_PWM_PinsPack_2);

	while (1) {
		
		a=0.5*TM_RNG_Get()/4294967295-1;

		for(float d=20;d<160;d=d+5)
		{
		TM_SERVO_SetDegrees(&Servo1, d);	
			Delayms(14+a);
		
		}
		
				for(float d=160;d>20;d=d-5)
		{
		TM_SERVO_SetDegrees(&Servo1, d);	
			Delayms(14+a);
		
		}
//		zero(0);
//		Delayms(1000);
//		
//		zero(180);
//		Delayms(1000);
	

	}
}

void zero(float d)
{
			/* 0 degrees rotation on servo 1 */
		TM_SERVO_SetDegrees(&Servo1, d);	
		
}

