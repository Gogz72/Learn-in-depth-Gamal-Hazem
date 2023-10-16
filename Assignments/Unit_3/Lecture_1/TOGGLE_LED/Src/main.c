/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Gamal Hazem
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "std_types.h"
#include "STM32F103CX_GPIO.h"

int main(void)
{

	GPIOA_INIT();

	*GPIOA_CRL |= 0x00000002;
    int i;
    /* Loop forever */
	for(;;)
	{

		for(i=0;i<5000;i++);

		SET_BIT(0,GPIOA_ODR);

		for(i=0;i<5000;i++);


		RESET_BIT(0,GPIOA_ODR);



	}

}
