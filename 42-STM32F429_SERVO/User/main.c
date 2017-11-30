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

int main(void) {
	/* Servo structs */
	TM_SERVO_t Servo1, Servo2, Servo3, Servo4, Servo5, Servo6, Servo7, Servo8, Servo9, Servo10, Servo11, Servo12, Servo13, Servo14, Servo15, Servo16, Servo17, Servo18, Servo19, Servo20;
	
	/* Initialize system */
	SystemInit();
	
	/* Initialize delay */
	TM_DELAY_Init();
	
	/* Initialize servo 1, TIM2, Channel 1, Pinspack 2 = PA5 */
	TM_SERVO_Init(&Servo1, TIM2, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
	
	/* Initialize servo 2, TIM2, Channel 2, Pinspack 2 = PB3 */
	TM_SERVO_Init(&Servo2, TIM2, TM_PWM_Channel_2, TM_PWM_PinsPack_2);
	
	/* Initialize servo 3, TIM2, Channel 1, Pinspack 1 = PA0 */
	TM_SERVO_Init(&Servo3, TIM2, TM_PWM_Channel_1, TM_PWM_PinsPack_1);	
	
	/* Initialize servo 4, TIM2, Channel 2, Pinspack 1 = PA1 */
	TM_SERVO_Init(&Servo4, TIM2, TM_PWM_Channel_2, TM_PWM_PinsPack_1);
		
	/* Initialize servo 5, TIM2, Channel 3, Pinspack 1 = PA2 */
	TM_SERVO_Init(&Servo5, TIM2, TM_PWM_Channel_3, TM_PWM_PinsPack_1);
		
	/* Initialize servo 6, TIM2, Channel 4, Pinspack 1 = PA3 */
	TM_SERVO_Init(&Servo6, TIM2, TM_PWM_Channel_4, TM_PWM_PinsPack_1);
		
	/* Initialize servo 7, TIM3, Channel 1, Pinspack 1 = PA6 */
	TM_SERVO_Init(&Servo7, TIM3, TM_PWM_Channel_1, TM_PWM_PinsPack_2);
		
	/* Initialize servo 8, TIM3, Channel 2, Pinspack 2 = PA7 */
	TM_SERVO_Init(&Servo8, TIM3, TM_PWM_Channel_2, TM_PWM_PinsPack_1);
		
	/* Initialize servo 9, TIM1, Channel 1, Pinspack 2 = PA8 */
	TM_SERVO_Init(&Servo9, TIM1, TM_PWM_Channel_1, TM_PWM_PinsPack_1);
		
	/* Initialize servo 10, TIM1, Channel 2, Pinspack 2 = PA9 */
	TM_SERVO_Init(&Servo10, TIM1, TM_PWM_Channel_2, TM_PWM_PinsPack_1);
		
	/* Initialize servo 11, TIM1, Channel 3, Pinspack 2 = PA10 */
	TM_SERVO_Init(&Servo11, TIM1, TM_PWM_Channel_3, TM_PWM_PinsPack_1);
		
	/* Initialize servo 12, TIM1, Channel 4, Pinspack 2 = PA11 */
	TM_SERVO_Init(&Servo12, TIM1, TM_PWM_Channel_4, TM_PWM_PinsPack_1);	
	
	/* Initialize servo 13, TIM4, Channel 1, Pinspack 1 = PB6 */
	TM_SERVO_Init(&Servo13, TIM4, TM_PWM_Channel_1, TM_PWM_PinsPack_1);
		
	/* Initialize servo 14, TIM4, Channel 2, Pinspack 1 = PB7 */
	TM_SERVO_Init(&Servo14, TIM4, TM_PWM_Channel_2, TM_PWM_PinsPack_1);
		
	/* Initialize servo 15, TIM4, Channel 3, Pinspack 1 = PB8 */
	TM_SERVO_Init(&Servo15, TIM4, TM_PWM_Channel_3, TM_PWM_PinsPack_1);
		
	/* Initialize servo 16, TIM4, Channel 4, Pinspack 1 = PB9 */
	TM_SERVO_Init(&Servo16, TIM4, TM_PWM_Channel_4, TM_PWM_PinsPack_1);
		
	/* Initialize servo 17, TIM8, Channel 1, Pinspack 1 = PA5 */
	TM_SERVO_Init(&Servo17, TIM8, TM_PWM_Channel_1, TM_PWM_PinsPack_1);
		
	/* Initialize servo 18, TIM8, Channel 2, Pinspack 1 = PA5 */
	TM_SERVO_Init(&Servo18, TIM8, TM_PWM_Channel_2, TM_PWM_PinsPack_1);
		
	/* Initialize servo 19, TIM8, Channel 3, Pinspack 1 = PA5 */
	TM_SERVO_Init(&Servo19, TIM8, TM_PWM_Channel_3, TM_PWM_PinsPack_1);
		
	/* Initialize servo 20, TIM8, Channel 4, Pinspack 1 = PA5 */
	TM_SERVO_Init(&Servo20, TIM8, TM_PWM_Channel_4, TM_PWM_PinsPack_1);

	
	

		/* 0 degrees rotation on servo 1 */
		TM_SERVO_SetDegrees(&Servo1, 0);
	
	while (1) {
		/* 0 degrees rotation on servo 1 */
		TM_SERVO_SetDegrees(&Servo1, 0);	
		
		TM_SERVO_SetDegrees(&Servo2, 0);
		
		TM_SERVO_SetDegrees(&Servo3, 0);
		
		TM_SERVO_SetDegrees(&Servo4, 0);
		
		TM_SERVO_SetDegrees(&Servo5, 0);
		
		TM_SERVO_SetDegrees(&Servo6, 0);
		
		TM_SERVO_SetDegrees(&Servo7, 0);
		
		TM_SERVO_SetDegrees(&Servo8, 0);
		
		TM_SERVO_SetDegrees(&Servo9, 0);
				
		TM_SERVO_SetDegrees(&Servo10, 0);
				
		TM_SERVO_SetDegrees(&Servo11, 0);
				
		TM_SERVO_SetDegrees(&Servo12, 0);
				
		TM_SERVO_SetDegrees(&Servo13, 0);
				
		TM_SERVO_SetDegrees(&Servo14, 0);
		
		TM_SERVO_SetDegrees(&Servo15, 0);
				
		TM_SERVO_SetDegrees(&Servo16, 0);
				
		TM_SERVO_SetDegrees(&Servo17, 0);
			
		TM_SERVO_SetDegrees(&Servo18, 0);
				
		TM_SERVO_SetDegrees(&Servo19, 0);
				
		TM_SERVO_SetDegrees(&Servo20, 0);
		
		
		
		
	
		/* 2s delay */
		//Delayms(200);
	}
}
