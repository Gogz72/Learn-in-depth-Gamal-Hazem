///*
// * EX_4.c
// *
// *  Created on: 26 Sept 2023
// *      Author: Gamal Hazem
// */
//
//
//#include "stdio.h"
//#include "strings.h"
//
//
//void read_data ();
//void print_data();
//
//
//struct Sstudent
//{
//	char name [50];
//
//	short roll_no;
//
//	float marks;
//
//};
//
//
//
//void read_data (struct Sstudent students[])
//{
//	int i;
//
//	printf("Enter information of students:\n");
//	fflush(stdin);fflush(stdout);
//
//	for (i = 0 ; i<10 ; i++)
//	{
//
//	students[i].roll_no = i+1;
//
//	printf("for roll number %d\n" , i+1);
//	fflush(stdin);fflush(stdout);
//
//	printf("Enter name:  ");
//	fflush(stdin);fflush(stdout);
//
//	scanf("%s" , &students[i].name);
//	fflush(stdin);fflush(stdout);
//
//	printf("Enter marks:  ");
//	fflush(stdin);fflush(stdout);
//
//	scanf("%f" , &students[i].marks);
//	fflush(stdin);fflush(stdout);
//
//	}
//
//}
//
//
//void print_data(struct Sstudent students[])
//{
//	int i;
//
//	printf("\nDisplaying information:\n");
//	fflush(stdin);fflush(stdout);
//
//	for(i=0;i<10;i++)
//	{
//
//	printf("information for roll number %d:\n" , i+1);
//	fflush(stdin);fflush(stdout);
//
//	printf("name: %s\n" , students[i].name);
//	fflush(stdin);fflush(stdout);
//
//	printf("marks: %f\n" , students[i].marks);
//	fflush(stdin);fflush(stdout);
//
//	}
//}
//
//
//
//int main ()
//{
//
//	int prompt = 1;
//
//	struct Sstudent students[10];
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
//		    read_data(students);
//
//			print_data(students);
//
//		}
//
//
//return 0;
//}
//
//
