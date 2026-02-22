#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#pragma region Method Declaration
void PrintNum(int arr[], int size);
void DoubleArrayData(int arr[], int size);
#pragma endregion



int main()
{
	return 0;
}

void PrintNum(int arr[], int size)
{
	/*main code : 
	* 
	int arrr[5];

	printf("Enter 5 value to store in array");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arrr[i]);
	}
	PrintNum(arrr, 5);
	return 0;
	
	*/

	int i;
	printf("Printing through function \n");
	for (i = 0; i < size; i++)
	{
		printf("%d\n", arr [i]);
	}


}

void DoubleArrayData(int arr[], int size)
{
	/* main code :
	* int arr[5];
	printf("Enter the 5 element in array; ");
	for (int i = 0; i <5; i++)
	{
		scanf("%d", &arr[i]);
	}
	 DoubleArrayData(arr, 5);
	printf("Printing for main after doubling\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
	*/
	for (int i = 0; i < size; i++)
	{
		arr[i] *= 2;
	}
	return arr;
}

int ReturnLargest(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>arr[i+1])
		{
			temp = arr[i];

		}

	}
}