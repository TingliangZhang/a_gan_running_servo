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

	/* Servo structs */
	TM_SERVO_t Servo1, Servo2, Servo3, Servo4, Servo5, Servo6, Servo7, Servo8, Servo9, Servo10, Servo11, Servo12, Servo13, Servo14, Servo15;
	


void zero(float d);


int main(void) {
	/* Servo structs */
	//TM_SERVO_t Servo1, Servo2, Servo3, Servo4, Servo5, Servo6, Servo7, Servo8, Servo9, Servo10, Servo11, Servo12, Servo13, Servo14, Servo15;
	
	/* Initialize system */
	SystemInit();
	
	/* Initialize delay */
	TM_DELAY_Init();
	
	//PD15 PA1 PA2 PA8 PA9 PC8  PA10 PC6 PC7 PC8     ������
	
	
	/* Initialize servo 1, TIM2, Channel 1, Pinspack 2 = PA5 */
	TM_SERVO_Init(&Servo1, TIM2, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
	
	/* Initialize servo 2, TIM2, Channel 2, Pinspack 2 = PB3 */
	TM_SERVO_Init(&Servo2, TIM2, TM_PWM_Channel_2, TM_PWM_PinsPack_2);
	
	/* Initialize servo 3, TIM2, Channel 1, Pinspack 1 = PA0 */
	TM_SERVO_Init(&Servo3, TIM2, TM_PWM_Channel_1, TM_PWM_PinsPack_1);	
	
	
	
	/* Initialize servo 4, TIM4, Channel 2, Pinspack 1 = PD13 */
	TM_SERVO_Init(&Servo4, TIM4, TM_PWM_Channel_2, TM_PWM_PinsPack_2); 
		
	/* Initialize servo 5, TIM4, Channel 3, Pinspack 1 = PB0 */
	TM_SERVO_Init(&Servo5, TIM3, TM_PWM_Channel_3, TM_PWM_PinsPack_1);
		
		
		
	/* Initialize servo 6, TIM2, Channel 4, Pinspack 1 = PA3 */
	TM_SERVO_Init(&Servo6, TIM2, TM_PWM_Channel_4, TM_PWM_PinsPack_1);
		
	/* Initialize servo 7, TIM3, Channel 1, Pinspack 1 = PA6 */
	TM_SERVO_Init(&Servo7, TIM3, TM_PWM_Channel_1, TM_PWM_PinsPack_1);
		
	/* Initialize servo 8, TIM3, Channel 2, Pinspack 2 = PA7 */
	TM_SERVO_Init(&Servo8, TIM3, TM_PWM_Channel_2, TM_PWM_PinsPack_1);
		
		
		
	/* Initialize servo 9, TIM8, Channel 1, Pinspack 1 = PF7 */
	TM_SERVO_Init(&Servo9, TIM11, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
		
	/* Initialize servo 10, TIM8, Channel 2, Pinspack 1 = PF8 */
	TM_SERVO_Init(&Servo10, TIM13, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
		
		
		
	/* Initialize servo 11, TIM1, Channel 3, Pinspack 2 = PF6 */
	TM_SERVO_Init(&Servo11, TIM10, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
		
	/* Initialize servo 12, TIM1, Channel 4, Pinspack 2 = PA11 */
	TM_SERVO_Init(&Servo12, TIM1, TM_PWM_Channel_4, TM_PWM_PinsPack_1);	
	
	/* Initialize servo 13, TIM4, Channel 1, Pinspack 1 = PB6 */
	TM_SERVO_Init(&Servo13, TIM4, TM_PWM_Channel_1, TM_PWM_PinsPack_1);
		
	/* Initialize servo 14, TIM4, Channel 2, Pinspack 1 = PB7 */
	TM_SERVO_Init(&Servo14, TIM4, TM_PWM_Channel_2, TM_PWM_PinsPack_1);
		
	/* Initialize servo 15, TIM4, Channel 3, Pinspack 1 = PB8 */
	TM_SERVO_Init(&Servo15, TIM4, TM_PWM_Channel_3, TM_PWM_PinsPack_1);
		
	/* Initialize servo 16, TIM4, Channel 4, Pinspack 1 = PB9 */
	//TM_SERVO_Init(&Servo16, TIM4, TM_PWM_Channel_4, TM_PWM_PinsPack_1);
		
	/* Initialize servo 17, TIM8, Channel 1, Pinspack 1 = PF7 */
	//TM_SERVO_Init(&Servo17, TIM11, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
		
	/* Initialize servo 18, TIM8, Channel 2, Pinspack 1 = PF8 */
	//TM_SERVO_Init(&Servo18, TIM13, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
		
	/* Initialize servo 19, TIM8, Channel 3, Pinspack 1 = PF9 */
	//TM_SERVO_Init(&Servo19, TIM14, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
		
	/* Initialize servo 20, TIM8, Channel 4, Pinspack 1 = PC9 */
	//TM_SERVO_Init(&Servo20, TIM8, TM_PWM_Channel_4, TM_PWM_PinsPack_1);

	
	

		
				
	
	while (1) {

		zero(0);
		Delayms(4000);
		
		zero(180);
		Delayms(4000);
	
		/* 2s delay */
		//Delayms(200);
	}
}

void zero(float d)
{
			/* 0 degrees rotation on servo 1 */
		TM_SERVO_SetDegrees(&Servo1, d);	
		
		TM_SERVO_SetDegrees(&Servo2, d);
		
		TM_SERVO_SetDegrees(&Servo3, d);
		
		TM_SERVO_SetDegrees(&Servo4, d);
		
		TM_SERVO_SetDegrees(&Servo5, d);
		
		TM_SERVO_SetDegrees(&Servo6, d);
		
		TM_SERVO_SetDegrees(&Servo7, d);
		
		TM_SERVO_SetDegrees(&Servo8, d);
		
		TM_SERVO_SetDegrees(&Servo9, d);
				
		TM_SERVO_SetDegrees(&Servo10, d);
				
		TM_SERVO_SetDegrees(&Servo11, d);
				
		TM_SERVO_SetDegrees(&Servo12, d);
				
		TM_SERVO_SetDegrees(&Servo13, d);
				
		TM_SERVO_SetDegrees(&Servo14, d);
		
		TM_SERVO_SetDegrees(&Servo15, d);
				
//	  TM_SERVO_SetDegrees(&Servo16, 0);
//				
//		TM_SERVO_SetDegrees(&Servo17, 0);
//			
//		TM_SERVO_SetDegrees(&Servo18, 0);
//				
//		TM_SERVO_SetDegrees(&Servo19, 0);
//				
//		TM_SERVO_SetDegrees(&Servo20, 0);
		
}

