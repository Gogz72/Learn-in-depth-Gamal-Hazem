///*
// * EX_5_ARRAYS.c
// *
// *  Created on: 24 Jul 2023
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
//	int a [100];
//
//	int n;
//
//	int i , x , loc;
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
//		printf("Enter the number of elements: ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%d",&n);
//
//		fflush(stdin); fflush(stdout);
//
//
//		for(i=0;i<n;i++)
//		{
//			a[i]=(i+1)*11;
//
//			printf("%d  ",a[i]);
//		}
//
//		printf("\r\n");
//
//
//		if (n>99)
//		{
//
//			printf("The number you entered exceeds the limit of the array. \r\ntry again.\r\n" );
//			continue;
//		}
//
//		printf("Enter the element to be searched: ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%d",&x);
//
//		fflush(stdin); fflush(stdout);
//
//
//		for (i=0;i<n;i++)
//
//
//			if (a[i]==x)
//				loc=i;
//
//	    printf("number found at location = %d\r\n" , loc+1);
//
//
//
//
//
//	}
//
//}
//
//
