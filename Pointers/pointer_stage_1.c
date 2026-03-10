#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	/*
	* Write a program to:
		Read 10 integers from the user.
		Store them in an array using pointer notation.
		Display all numbers using pointer notation.
	
	int arr[10];
	int *ptr = arr;
	int i;
	printf("Enter 10 numbers: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",ptr+i );
	}

	for ( i = 0; i < 10; i++)
	{
		printf("%d \n", *(ptr + i));
	}
	*/

	/*Write a program to:
	Read marks of 10 students.
	Store them in an array using pointer notation.
	Calculate the average marks.
	Display the average.

	int arr[10];
	int* ptr = arr;
	int i;
	float avg ;
	int sum = 0;
	printf("Enter 10 numbers: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", ptr + i);
		sum += *(ptr + i);
		avg = sum / 10; 
	}
	printf("Average is %.2f \n", avg);

	return 0; 
	*/

	/*
	* Write a program to:
		Read 5 numbers into an array using pointer notation.
		Increase each number by 5 using pointer arithmetic.
		Display the updated array.

	int arr[5];
	int* ptr = arr;
	int i;
	printf("Enter 10 numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", ptr + i);
	}

	for ( i = 0; i < 5; i++)
	{
		*(ptr + i) += 5;
	}

	for ( i = 0; i < 5; i++)
	{
		printf("%d \n", *(ptr + i));
	}
	*/


	/*
	* Problem 4
		Write a program to:
		Read 5 numbers.
		Use pointer notation to find the largest number.
		Display the largest number.
	
	int arr[5];
	int* ptr = arr;
	int i;
	printf("Enter 5 numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", ptr + i);
	}
	int larg = *(ptr + 0);
	for ( i = 0; i < 5; i++)
	{
		if (*(ptr+i)>larg)
		{
			larg = *(ptr + i);
		}
	}
	printf("largest Number = %d \n", larg);

	*/

	/*
		* Practice Set 5 (Very Important – Exam Type)
	Problem 5
	Write a program to:
	Read 10 integers using pointer notation.
	Count how many numbers are even and odd.
	

int arr[10];
int* ptr = arr;
int i, even = 0, odd = 0;
printf("Enter 10 numbers: ");
for (int i = 0; i < 10; i++)
{
	scanf("%d", ptr + i);
}
for ( i = 0; i < 10; i++)
{
	if (*(ptr+i)%2==0)
	{
		even++;
	}
	else
	{
		odd++; 
	}
}

printf("\n Total Even Number is : %d and Odd Number : %d", even, odd);
*/
	return 0;
}


