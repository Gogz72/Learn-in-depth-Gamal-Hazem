/*
 * EX_4.c
 *
 *  Created on: 18 Sept 2023
 *      Author: Gamal Hazem
 */
// POWER OF NUMBER

#include <stdio.h>
#include "string.h"

int num;

int pow(int x , int n);

int pow(int x , int n) {

	if (n>1)
	{
        num*=x;
		n--;

	  pow(x , n);
	}
	if (n==1)
	{
		return num;
	}

}

	void main() {
		int prompt = 1;
		int x;
		int n;

		while (1) {

			printf("\nContinue?");
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &prompt);
			fflush(stdin);
			fflush(stdout);

			if (prompt == 0)
				break;

			printf("Enter base number :  ");
			fflush(stdin);
			fflush(stdout);
			scanf("%d" , &x);
			fflush(stdin);
			fflush(stdout);
			printf("Enter power number(positive integer) :  ");
			fflush(stdin);
			fflush(stdout);
			scanf("%d" , &n);
			fflush(stdin);
			fflush(stdout);

			num = x;

			printf("%d^%d = %d" ,x,n,pow(x,n));

		}

	}

