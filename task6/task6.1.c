#include <stdio.h>
#include <math.h> 
#include <conio.h> 
#include <stdlib.h> 
#include "func.h"
int main(void)
{
	int z = 0;
	printf("Menu:\n");
	printf("1. Task 1\n");
	printf("2. Task 2\n");
	printf("3. Task 3\n");
	printf("4. Task 4\n");
	printf("5. Task 5\n");
	printf("6. Exit \n");
	do
	{
		printf("Select Task number: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Task 1: ");
			int n;
			float f;
			printf("\nEnter the number n = ");
			scanf("%i", &n);
			f = summ(n);
			printf("Result : %f\n", f);
			z = 1;
			break;
		}
		case '2':
		{
			printf("Task 2:\n ");
			float f1;
			float eps;
			printf("Enter precision eps = ");
			scanf("%f", &eps);
			f1 = summ2(eps);
			printf("Result: %4f\n", f1);
			z = 2;
			break;
		}
		case '3':
		{
			printf("Task 3\n ");
			int n1;
			int k;
			printf("Enter the number n = ");
			scanf("%i", &n1);
			printf("Enter the number k = ");
			scanf("%i", &k);
			print(n1, k);
			z = 3;
			break;
		}
		case '4':
		{
			printf("Task 4\n ");
			int i;
			float eps;
			printf("Enter precision eps = ");
			scanf("%f", &eps);
			i = findFirstElement(eps);
			printf("Result: %i\n", i);
			z = 4;
			break;
		}
		case '5':
		{
			printf("Task 5\n ");
			int i;
			float eps;
			printf("Enter precision eps = ");
			scanf("%f", &eps);
			i = findFirstNegativeElement(eps);
			printf("Result: %i\n", i);
			z = 5;
			break;
		}
		case '6':
		{
			printf("The program has ended.\n ");
			z = 6;
			break;
		}
		}
	} while (z != 6);
	system("pause");
	return 0;
}
