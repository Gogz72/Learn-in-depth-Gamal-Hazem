#include "STM32F103CX_GPIO.h"


void GPIOA_INIT()
{
	setbit(2,*RCC_APB2ENR);
	*GPIOA_CRH &= 0;
	*GPIOA_CRL &= 0;
}

void GPIOB_INIT()
{
	setbit(3,*RCC_APB2ENR);
	*GPIOB_CRH &= 0;
	*GPIOB_CRL &= 0;
}


//void PIN_MODE (uint8 pin , uint8 mode ,vpuint32 port)
//{
//
//	if (mode)
//		setbit(0x2 , *port);
//	else
//	    resetbit(0x2 , *port);
//
//
//}

void TOGGLE_BIT(uint32 pin , vpuint32 port)
{

	togglebit(pin , *port);

}

void SET_BIT(uint32 pin , vpuint32 port)

{
	setbit(pin , *port);

}

void RESET_BIT(uint32 pin , vpuint32 port)
{

	resetbit(pin , *port);
}


