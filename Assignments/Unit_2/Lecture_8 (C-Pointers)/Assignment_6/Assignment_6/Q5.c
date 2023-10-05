/*
 * Q5.c
 *
 *  Created on: 4 Oct 2023
 *      Author: Gamal Hazem
 */

#include "stdio.h"
#include"strings.h"



struct Semployee

{
	char name [50];
	int id;

};

struct Semployee read_data ()
{
	struct Semployee employee;

	printf("Enter information of employee:\n");
	fflush(stdin);fflush(stdout);

	printf("Enter first name:  ");
	fflush(stdin);fflush(stdout);

	scanf("%s" , &employee.name);
	fflush(stdin);fflush(stdout);

	printf("Enter ID:  ");
	fflush(stdin);fflush(stdout);

	scanf("%d" , &employee.id);
	fflush(stdin);fflush(stdout);



	return employee;
}


int main() {

////// PROMPT TO RELOOP THE FUNCTION //////

	int prompt = 1;

////// DATA FOR PROGRAM ///////

	struct Semployee* arr [3];

	struct Semployee** p = NULL;

    struct Semployee example[3];
    int i , n;


	while (1) {

		printf("Continue?");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &prompt);
		fflush(stdin);
		fflush(stdout);

		if (prompt == 0)
			break;

////// PROGRAM //////

		for(i=0;i<3;i++)
		{
	    example[i] = read_data();
        arr[i] = &example[i];
		}

		p=arr;

		printf("Enter the ID of employee to show: ");
		fflush(stdin);fflush(stdout);

		scanf("%d" , &n);
		fflush(stdin);fflush(stdout);

		for (i = 0; i < 3; i++) {
		    if ((*p)->id == n) {
		        printf("Employee name: %s\n", (*p)->name);
		        printf("Employee ID: %d\n", (*p)->id);
		    }
		    else
		        p++;
		}









		}
	return 0;
	}


