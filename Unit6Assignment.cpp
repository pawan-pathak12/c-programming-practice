#include<stdio.h>
int main()
{
	/* 1
	.Write a C program that inputs 'n' numbers into an array and identifies both the largest and the
	smallest number in that collection
	
    int n, i;
    int larg, small;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers in array:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest with first element
    larg = arr[0];
    small = arr[0];

    // Traverse array to update largest and smallest
    for (i = 1; i < n; i++) {
        if (arr[i] > larg) {
            larg = arr[i];
        }
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    printf("Largest number = %d\n", larg);
    printf("Smallest number = %d\n", small);

    */

    /*
    * 2. Write a program to read an array containing 'n' positive integers and count how many of them
are even and how many are odd
    
    
    int i;
    int n;
    int even = 0, odd = 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d  positive number :",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            printf("Negative number entered. Exiting...\n");
            return 0;  // stop program immediately
        }
        
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even Number count :%d", even);
    printf("Odd Number count :%d", odd);

	return 0;

    */

    /*
    3.Write a program that reads an array of 'n' numbers and then prints the elements of that array in
        reverse order .


    int i;
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d the  numbers :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = n-1; i >=0; i++)
    {
        printf("%d\n", arr[i]);
    }
        */

    /*
    4. Write a program to enter the salary of 'n' employees into an array and calculate the total
number of employees whose salary falls between 5,000 and 10,000 
    

int i;
int n;
int count = 0;
printf("Enter the number of employee : ");
scanf("%d", &n);
int arr[n];
for (i = 0; i < n; i++)
{
    printf("Enter the salary of employee %d: ", i + 1);  
    scanf("%d", &arr[i]);
    if (arr[i] >= 5000 && arr[i] <= 10000)
    {
        count++;
    }
}
printf("\nTotal employees with salary between 5000 and 10000: %d\n", count);return 0;


    /*
    */

    /*
     */

     /*
      */


}
