///*
// * EX_4_ARRAYS.c
// *
// *  Created on: 23 Jul 2023
// *      Author: Gamal Hazem
// */
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
//	int a [100];
//
//	int n;
//
//	int i , x , loc;
//
//	int temp[100];
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
//			a[i]=i+1;
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
//		printf("Enter the element to be inserted: ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%d",&x);
//
//		fflush(stdin); fflush(stdout);
//
//		printf("Enter the location: ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%d",&loc);
//
//		loc--;
//
//		fflush(stdin); fflush(stdout);
//
//
//
//
//		for (i=0;i<loc;i++)
//			temp[i] = a[i];
//
//
//
//		for (i=loc;i<n;i++)
//
//			temp[i+1] = a[i];
//
//
//
//
//
//		temp[loc] = x;
//
//
//
//
//		for(i=0;i<n+1;i++)
//			a[i]=temp[i];
//
//
//		for(i=0;i<n+1;i++)
//		{
//
//			printf("%d  ",a[i]);
//		}
//
//
//
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
