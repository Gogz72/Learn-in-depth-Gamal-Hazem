/*
 * STM32F103CX.H
 *
 *  Created on: 16 Oct 2023
 *      Author: GAMAL HAZEM
 */

#ifndef FILES_STM32F103CX_GPIO_H_
#define FILES_STM32F103CX_GPIO_H_

////// INCLUDES //////
#include "std_types.h"
#include "bitwise.h"

////// FUNCTION DECLARATIONS //////
void GPIOA_INIT();
void GPIOB_INIT();
void SET_BIT       (uint32 pin , vpuint32 port);
void RESET_BIT     (uint32 pin , vpuint32 port);
void TOGGLE_BIT    (uint32 pin , vpuint32 port);
//void PIN_MODE (uint8 pin , uint8 mode ,vpuint32 port);


////// REGISTERS //////
#define RCC_BASE    0x40021000
#define GPIOA_BASE  0x40010800
#define GPIOB_BASE  0x40010C00
#define RCC_APB2ENR ((vpuint32) (RCC_BASE + 0x18))
#define GPIOA_CRL   ((vpuint32) (GPIOA_BASE)+0x00)
#define GPIOA_CRH   ((vpuint32) (GPIOA_BASE + 0x04))
#define GPIOA_ODR   ((vpuint32) (GPIOA_BASE+0x0c))
#define GPIOA_BSRR  ((vpuint32) (GPIOA_BASE+0x10))
#define GPIOB_CRL   ((vpuint32) (GPIOB_BASE)+0x00)
#define GPIOB_CRH   ((vpuint32) (GPIOB_BASE + 0x04))
#define GPIOB_ODR   ((vpuint32) (GPIOB_BASE+0x0c))
#define GPIOB_BSRR  ((vpuint32) (GPIOB_BASE+0x10))







#endif /* FILES_STM32F103CX_GPIO_H_ */
