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

    
    /*5. Write a C program to take 'n' numbers as input and sort them in both ascending and descending
        order using an array
  
    int n, i, j, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort in ascending order (simple bubble sort)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print ascending order
    printf("\nArray in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print descending order (just reverse the sorted array)
    printf("\nArray in descending order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
       */

     /*
     *7. Write a C program to find and display the transpose of a matrix (exchanging its rows with its
        columns)

        #include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];  // transpose has swapped dimensions

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transpose
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
      */

/*
*/

/*
*/



}
