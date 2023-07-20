/*
 * EX8.c
 *
 *  Created on: 20 Jul 2023
 *      Author: Gamal Hazem
 */

#include "stdio.h"
#include "conio.h"

void main()
{
	float x , y , result;

	char operand;

	while(1)
	{
		redo:

		printf ("Enter operator either + or - or * or / : ");

		fflush(stdin); fflush(stdout);

		scanf ("%c" , &operand );

		fflush(stdin); fflush(stdout);

		printf ("Enter two operands : ");

		fflush(stdin); fflush(stdout);

		scanf ("%f %f" , &x ,&y );

		fflush(stdin); fflush(stdout);

		switch (operand)
		{
		case '+':
			result = x+y;
			break;
		case '-':
			result = x-y;
			break;
		case '*':
			result = x*y;
			break;
		case '/':
			result = x/y;
			break;
		default:
		{
			printf ("You entered a wrong or unavailable operand.\r\n");

			fflush(stdin); fflush(stdout);

			goto redo;
		}
			break;
		}

		printf ("%f %c %f = %f\r\n", x , operand , y , result);

		fflush(stdin); fflush(stdout);



	}



}
