///*
// * Q3.c
// *
// *  Created on: 4 Oct 2023
// *      Author: Gamal Hazem
// */
//
//#include "stdio.h"
//#include"strings.h"
//
//
//
//
//
//int main() {
//
//////// PROMPT TO RELOOP THE FUNCTION //////
//
//	int prompt = 1;
//
//////// DATA FOR PROGRAM ///////
//
//	int arr [15];
//
//    int* p = NULL;
//
//    int n , i;
//
//
//
//
//	while (1) {
//
//		printf("Continue?");
//		fflush(stdin);
//		fflush(stdout);
//		scanf("%d", &prompt);
//		fflush(stdin);
//		fflush(stdout);
//
//		if (prompt == 0)
//			break;
//
//////// PROGRAM //////
//
//		printf("input the number of elements you want to store in the array (max 15): ");
//		fflush(stdin);fflush(stdout);
//
//		scanf ("%d" , &n);
//		fflush(stdin);fflush(stdout);
//
//		printf("input %d numbers of elements in the array:\n" , n);
//		fflush(stdin);fflush(stdout);
//
//		for (i = 0 ; i<n ; i++)
//		{
//			printf("element - %d: " , i+1);
//			fflush(stdin);fflush(stdout);
//
//			scanf ("%d" , &arr[i]);
//			fflush(stdin);fflush(stdout);
//
//		}
//
//		p = arr +(n-1);
//
//
//		printf("The elements in reverse order are:\n");
//		fflush(stdin);fflush(stdout);
//
//		for(i=n-1;i>=0;i--)
//		{
//			printf("element - %d : %d\n" , i+1, *p);
//			fflush(stdin);fflush(stdout);
//
//			p--;
//
//		}
//
//
//
//}
//	return 0;
//}
