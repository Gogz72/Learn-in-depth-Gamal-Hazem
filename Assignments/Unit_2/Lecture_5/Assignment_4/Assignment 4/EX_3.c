///*
// * EX_3.c
// *
// *  Created on: 18 Sept 2023
// *      Author: Gamal Hazem
// */
//// REVERSE SENTANCE
//
//#include <stdio.h>
//#include "string.h"
//
//void Reverse(char sent [] , int n);
//
//void Reverse(char sent [] , int n) {
//
//
//	if (n>0)
//	{
//	  char x = sent[n-1];
//
//	  printf("%c" , x);
//
//		n--;
//
//	  Reverse(sent , n);
//	}
//
//}
//
//	void main() {
//		int prompt = 1;
//		char x [20];
//		int n;
//
//		while (1) {
//
//			printf("\nContinue?");
//			fflush(stdin);
//			fflush(stdout);
//			scanf("%d", &prompt);
//			fflush(stdin);
//			fflush(stdout);
//
//			if (prompt == 0)
//				break;
//
//			printf("Enter a sentence:  ");
//			fflush(stdin);
//			fflush(stdout);
//			gets (x);
//			fflush(stdin);
//			fflush(stdout);
//
//			n = strlen(x);
//
//			Reverse(x,n);
//
//		}
//
//	}
//
