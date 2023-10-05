///*
// * EX_3_ARRAYS.c
// *
// *  Created on: 23 Jul 2023
// *      Author: Gamal Hazem
// */
//
//
//
//
//#include "stdio.h"
//
//
//void main()
//{
//	int prompt=1;
//
//	float a [20][20];
//
//	float T [20][20];
//
//	int rows , col;
//
//	int i , j;
//
//
//
//	while(1)
//	{
//
//
//		printf("Continue?   ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%d",&prompt);
//
//		fflush(stdin); fflush(stdout);
//
//		if (prompt==0)
//			break;
//
//
//		printf("Enter the number of rows and columns: ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%d %d",&rows,&col);
//
//		fflush(stdin); fflush(stdout);
//
//		if (rows>19 || col>19)
//		{
//
//			printf("The number you entered exceeds the limit of the array. \r\ntry again.\r\n" );
//			continue;
//		}
//
//
//
//		fflush(stdin); fflush(stdout);
//
//		for (i=0;i<rows;i++)
//		{
//			for (j=0;j<col;j++)
//			{
//
//				printf("Enter element a%d%d:  " , i+1 , j+1);
//
//				fflush(stdin); fflush(stdout);
//
//				scanf("%f",&a[i][j]);
//
//				fflush(stdin); fflush(stdout);
//
//				T[j][i] = a[i][j];
//
//			}
//
//
//		}
//
//
//		printf("Entered matrix: \r\n");
//
//		for (i=0;i<rows;i++)
//		{
//
//			for (j=0;j<col;j++)
//			{
//
//				printf("%f  ",a[i][j]);
//
//
//			}
//
//			printf("\r\n");
//
//		}
//
//
//		printf("Transpose of matrix: \r\n");
//
//		for (i=0;i<col;i++)
//		{
//
//			for (j=0;j<rows;j++)
//			{
//
//				printf("%f  ",T[i][j]);
//
//
//			}
//
//			printf("\r\n");
//
//		}
//
//
//
//	}
//
//}
//
//
//
//
//
