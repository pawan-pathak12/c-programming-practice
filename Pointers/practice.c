/*

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Question 1 :
       Write a program to:
       Read 10 integers using pointer notation.
       Display all numbers using pointer notation.
    

    int i, a;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int arr[n];
    int* ptr = &arr;
    printf("Enter %d numbers :", a);
    for ( i = 0; i < a; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\n Enter numbers :\n");
    for ( i = 0; i < a; i++)
    {
        printf("%d\n", *(ptr)++);
    }
    */

    /* Question 2 :
       Write a program to:
       Read 5 integers.
       Find the sum of all numbers using pointer notation.
    
    int i, a , sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int arr[a];
    int* ptr = &arr;
    printf("Enter %d numbers :", a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr);
    }
    printf("Sum is : %d\n", sum);
    */

    /* Question 3 :
       Write a program to:
       Read 8 numbers.
       Count how many numbers are positive and negative using pointer notation.
 
    int i, a, pos =0 , neg = 0;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int arr[a];
    int *ptr = &arr;
    printf("Enter %d numbers :", a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", ptr + i);
        if (*(ptr+i)>0)
        {
            pos++;
        }
        else if (*(ptr+i)<0)
        {
            neg++;
        }
    }

    printf("\n positive count =%d \n neg count =%d \n", pos, neg);
       */


            /* Question 4 :
               Write a program to:
               Read 6 integers.
               Display the largest number using pointer notation.
    
            int i, a , larg,  temp;
            printf("Enter the size of array: ");
            scanf("%d", &a);
            int arr[a];
            int *ptr = &arr;
            printf("Enter %d numbers :", a);
            for (i = 0; i < a; i++)
            {
                scanf("%d", ptr + i);    
            }
            larg = *ptr; 
            for ( i = 1; i < a; i++)
            {
                if (*(ptr+i)>larg)
                {
                    temp = *(ptr + i);
                    larg = temp;
                }
            }

            printf("\n Largest number is : %d\n", larg);

            */

            /* Question 5 :
               Write a program to:
               Read 5 numbers.
               Multiply each number by 2 using pointer arithmetic.
               Display the updated array.
  

        int i, a;
        printf("Enter the size of array: ");
        scanf("%d", &a);
        int arr[a];
        int *ptr = &arr;
        printf("Enter %d numbers :", a);
        for (i = 0; i < a; i++)
        {
            scanf("%d", ptr + i);
        }

        for (i = 0; i < a; i++)
        {
            *(ptr + i) = *(ptr + i) * 2;
        }
        for ( i = 0; i < a; i++)
        {
            printf("%d\n", *(ptr + i));
        }
          */

    
  
          /* Question 6 :
               Write a program to:
               Read 7 integers.
               Display numbers in reverse order using pointer notation.
    
                int i, a;
                printf("Enter the size of array: ");
                scanf("%d", &a);

                int arr[7];
                int* ptr = &arr;
                printf("Enter %d numbers :", a);
                for (i = 0; i < a; i++)
                {
                    scanf("%d", ptr + i);
                }
        
                printf("Store data in reverse order is :\n");
                for (i = a-1; i >=0; i--)
                {
                    printf("%d \n", *(ptr + i));
                }
                */

            /* Question 7 :
               Write a program to:
               Read 10 numbers.
               Count even and odd numbers using pointer notation.
    
        int i, a, even = 0, odd = 0;
        printf("Enter the size of array: ");
        scanf("%d", &a);
        int arr[10];
        int* ptr = &arr;
        printf("Enter %d numbers :", a);
        for (i = 0; i < a; i++)
        {
            scanf("%d", ptr + i);
            if (*(ptr + i) %2== 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        printf("\n even count =%d \n odd count =%d \n", even, odd);
        */

 

        /* Question 8 :
               Write a program to:
               Read 5 numbers.
               Find the smallest number using pointer notation.
    

        int i, a, small, temp;
        printf("Enter the size of array: ");
        scanf("%d", &a);
        int arr[5];
        int* ptr = &arr;
        printf("Enter %d numbers :", a);
        for (i = 0; i < a; i++)
        {
            scanf("%d", ptr + i);
        }
        small = *ptr;
        for (i = 1; i < a; i++)
        {
            if (*(ptr + i) <small)
            {
                temp = *(ptr + i);
                small = temp;
            }
        }

        printf("\n smallest number is : %d\n", small);
        */

     /* Question 9 :
                       Write a program to:
                       Read 5 integers.
                       Swap the first and last element using pointer notation.
                       Example:
                       Input: 1 2 3 4 5
                       Output: 5 2 3 4 1
       
                 int i, a, temp;

                    printf("Enter the size of array: ");
                    scanf("%d", &a);

                    int arr[5];        // variable length array
                    int *ptr = arr;    // arr itself is a pointer

                    printf("Enter %d numbers: ", a);
                    for (i = 0; i < a; i++) {
                        scanf("%d", ptr + i);
                    }

                    // Swap first and last element
                    temp = *ptr;
                    *ptr = *(ptr + a - 1);
                    *(ptr + a - 1) = temp;

                    // Display updated array
                    printf("\nArray after swapping first and last:\n");
                    for (i = 0; i < a; i++) {
                        printf("%d ", *(ptr + i));
                    }
                    printf("\n");
                    */
    
    /* Question 10 (Important Exam Type) :
       Write a program to:
       Read number of students from the user.
       Read marks of each student using pointer notation.
       Display all marks.
       Calculate average marks.
       Use Dynamic Memory Allocation (DMA).

    
        int n, i , *ptr;
        printf("Enter the inital size of array:");
        scanf("%d", &n);

        ptr = (int*)malloc(n * sizeof(int));

        printf("enter the marks of %d student :",n);
        for ( i = 0; i < n; i++)
        {
            scanf("%d", ptr + i);
        }
        printf("Store marks of student is :\n");
        for ( i = 0; i < n; i++)
        {
            printf("%d\n", *(ptr + i));
        }
        free(ptr);

        */

    /* Question 11 :
       Write a program to:
       Ask user for number of elements.
       Allocate memory using malloc.
       Read elements using pointer notation.
       Display them.
    

        int n, i, * ptr;
        printf("Enter the number of element:");
        scanf("%d", &n);

        ptr = (int*)malloc(n * sizeof(int));

        printf("Enter %d numbers :",n);
        for ( i = 0; i < n; i++)
        {
            scanf("%d", ptr + i);
        }

        printf("Stored Numbers are : \n");
        for ( i = 0; i < n; i++)
        {
            printf("%d\n", *(ptr + i));
        }

        free(ptr);
        */

    /* Question 12 :
       Write a program to:
       Ask user for number of students.
       Allocate memory using malloc.
       Read marks of students.
       Calculate average marks.
    

        int n, i, *ptr, sum = 0;
    float avg;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    avg = (float)sum / n;

    printf("\nStored Marks of Students:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", *(ptr + i));
    }

    printf("Average marks = %.2f\n", avg);

    free(ptr);


        */

   // return 0;
//}

