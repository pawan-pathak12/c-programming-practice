#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#pragma region Declaration

void CountLeapYear();
void LeapYear();
void OneDArray();
void AddMatrix();
void Transpose();
void SubtractMatrix();

#pragma endregion

int main()
{
     Transpose();
    return 0;
}

void CountLeapYear()
{
    int a, b;
    int count = 0;

    printf("Enter the starting year : ");
    scanf("%d", &a);

    printf("Enter the ending year : ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) 
    {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            count++;
        }
    }

    printf("Number of leap years between %d and %d is %d\n", a, b, count);


}

void LeapYear()
{
    int a;
top:
    printf("Enter the year:");
    scanf("%d", &a);
    if (a % 400 == 0)
    {
        printf("Leap Year\n");
    }
    else if (a % 4 == 0)
    {
        printf("leap year\n");
    }
    else
    {
        printf("not leap year\n");
    }
    goto top;
    return 0;
}

#pragma region One D Array Practice 

void OneDArray()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the number");
        scanf("%d", &a[i]);
    }
    printf("Stored number in array is \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }
}

void CheckSmallAndLargestInArray()
{
    int a[5];
    int temp;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the number");
        scanf("%d", &a[i]);
    }

}

#pragma endregion

#pragma region two D Array 

void AddMatrix()
{
    int a[2][2]; 
    int b[2][2];
    int sum[2][2];
    printf("Enter elements of first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element in position (%d,%d) : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element in position (%d,%d) : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant Matrix (Sum):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

void SubtractMatrix()
{
    int a[2][2];
    int b[2][2];
    int sub[2][2];
    printf("Enter elements of first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element in position (%d,%d) : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element in position (%d,%d) : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nResultant Matrix (Subtract):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}

void Transpose()
{
    int a[2][2];
    int transpose[2][2];

    printf("Enter elements of  2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element in position (%d,%d) : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[i][j] = a[j][i];
        }
    }



    printf("\nResultant Matrix (tranpose):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    printf("\n Orginal Matrix ():\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

}

#pragma endregion


