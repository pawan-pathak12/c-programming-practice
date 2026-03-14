/*
#include<stdio.h>

#include <stdlib.h>
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

/*
Write a program to read number of students from user and then read marks of each
student. Display entered marks and their average value. Use pointer instead of
conventional array to represent marks of different students


	int n, i;
	float sum = 0, avg;

	printf("Enter the number of students: ");
	scanf("%d", &n);

	// Allocate memory dynamically using pointer
	int* marks = (int*)malloc(n * sizeof(int));

	printf("Enter marks of %d students:\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", (marks + i));   // pointer arithmetic
		sum += *(marks + i);        // add to sum
	}

	avg = sum / n;

	printf("\nEntered marks are:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", *(marks + i));
	}

	printf("Average marks = %.2f\n", avg);

	free(marks); // release allocated memory
	*/

/*
*Write a program to read an array of n integers using dynamic allocation, and
display the largest and smallest element among them

	int n, i;
	int* arr;
	int largest, smallest;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	// Allocate memory dynamically
	arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	// Input elements
	printf("Enter %d integers:\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}

	// Initialize largest and smallest
	largest = smallest = *arr;

	// Find largest and smallest
	for (i = 1; i < n; i++) {
		if (*(arr + i) > largest) {
			largest = *(arr + i);
		}
		if (*(arr + i) < smallest) {
			smallest = *(arr + i);
		}
	}

	// Display results
	printf("Largest element = %d\n", largest);
	printf("Smallest element = %d\n", smallest);

	// Free allocated memory
	free(arr);
	*/

/*
Write a program to read number of employees ,working in a company. Reserve the
memory required to store age of n employees using malloc()function. Read age of n
employees from user and count the number of employees of age above 80 years

	int n, i, count = 0;
	int *ages;

	printf("Enter the number of employees: ");
	scanf("%d", &n);

	// Allocate memory dynamically
	ages = (int *)malloc(n * sizeof(int));
	if (ages == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	// Input ages
	printf("Enter ages of %d employees:\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", (ages + i));
	}

	// Count employees above 80
	for (i = 0; i < n; i++) {
		if (*(ages + i) > 80) {
			count++;
		}
	}

	// Display result
	printf("Number of employees above 80 years = %d\n", count);

	// Free allocated memory
	free(ages);




	return 0;
}
*/

