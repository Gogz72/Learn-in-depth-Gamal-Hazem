//*
// * EX_1.c
// *
// *  Created on: 18 Sept 2023
// *      Author: Gamal Hazem
// */
// PRIME NUMBERS BETWEEN TWO INTERVALS
//
//#include <stdio.h>
//
//void prime(int x, int y);
//
//void prime(int x, int y) {
//	int num;
//	int i;
//	for (num = x; num <= y; num++) {
//		int is_prime = 1;
//		if (num < 2) {
//			is_prime = 0;
//		} else {
//			for (i = 2; i * i <= num; i++) {
//				if (num % i == 0) {
//					is_prime = 0;
//					break;
//				}
//			}
//		}
//
//		if (is_prime)
//		printf("%d   " , num);
//
//
//
//	}
//
//
//
//
//
//}
//
//	void main() {
//		int prompt = 1;
//		int x, y;
//
//		while (1) {
//
//			printf("Continue?");
//			fflush(stdin);
//			fflush(stdout);
//			scanf("%d", &prompt);
//			fflush(stdin);
//			fflush(stdout);
//
//			if (prompt == 0)
//				break;
//
//			printf("Enter two numbers(intervals):   ");
//			fflush(stdin);
//			fflush(stdout);
//			scanf("%d %d", &x, &y);
//			fflush(stdin);
//			fflush(stdout);
//			printf("Prime numbers between %d and %d are: " , x , y);
//			fflush(stdin);
//			fflush(stdout);
//			prime(x, y);
//			printf("\n");
//
//		}
//
//	}
//
