///*
// * EX_2_ARRAYS.c
// *
// *  Created on: 23 Jul 2023
// *      Author: Gamal Hazem
// */
//
//#include "stdio.h"
//
//
//void main()
//{
//	int prompt=1;
//
//	float a [100];
//
//	int n;
//
//	int i;
//
//	float averagenemo = 0;
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
//		printf("Enter the number of data: ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%d",&n);
//
//		fflush(stdin); fflush(stdout);
//
//		if (n>99)
//		{
//
//			printf("The number you entered exceeds the limit of the array. \r\ntry again.\r\n" );
//			continue;
//		}
//
//		for (i=0;i<n;i++)
//		{
//
//
//			printf("%d.Enter number:  " , i+1);
//
//			fflush(stdin); fflush(stdout);
//
//			scanf("%f",&a[i]);
//
//			fflush(stdin); fflush(stdout);
//
//			averagenemo+=a[i];
//
//		}
//
//
//
//		printf("Average = %f\r\n" , averagenemo/n);
//
//		averagenemo = 0;
//
//
//
//
//
//
//
//	}
//
//}
