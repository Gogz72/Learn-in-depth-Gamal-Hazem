///*
// * EX_1_STRINGS.c
// *
// *  Created on: 24 Jul 2023
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
//	char text [100];
//
//	int n = 0 ;
//
//	int freq = 0;
//
//	int i = 0;
//
//	char x;
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
//		printf("Enter a string: ");
//
//		fflush(stdin); fflush(stdout);
//
//		gets (text);
//
//		fflush(stdin); fflush(stdout);
//
//		printf("Enter a character to find frequency: ");
//
//		fflush(stdin); fflush(stdout);
//
//		scanf("%c",&x);
//
//		fflush(stdin); fflush(stdout);
//
//
//		while (text[i]!=0)
//		{
//			n++;
//			i++;
//
//		}
//
//		i=0;
//
//
//
//
//		for (i=0;i<=n;i++)
//
//
//			if (text[i]==x)
//				freq++;
//
//
//	    printf("frequency of %c = %d \r\n" , x , freq);
//
//	    freq = 0;
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
