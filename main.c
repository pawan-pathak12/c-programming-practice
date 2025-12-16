#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma region Function Declaration 

void AddTwoNum();
void SwapNum();
void SwapNumWithOutThirdVariable();
void ConvetTemperature();

void CheckLeapYear();
void PrintNum();
void FibSeries();
void CheckArmStrong();
void SquarePattern();
void RightTriangle();
void InvertedTriangle();


#pragma endregion


int main()
{
   
    //AddTwoNum();
    //SwapNum();
   // SwapNumWithOutThirdVariable();
   //  ConvetTemperature();
   // CheckLeapYear();
 //   PrintNum();
   // FibSeries();
 //  CheckArmStrong();
   //  SquarePattern();
  //  RightTriangle();
    InvertedTriangle();
  

    return 0;
}



#pragma region  Basic Input / Output Program

void AddTwoNum()
{
    int a,  b;
    printf("Enter the 2 number");
    scanf("%d %d", &a, &b);
    printf("Sum is %d", a + b);
}

// with third variable
void SwapNum()
{
    int a, b, temp;
     printf("Enter the First number");
    scanf("%d", &a);

    printf("Enter the Second Number");
    scanf("%d", &b);

    printf("Before Swaping a=%d , b=%d", a, b);
   
    temp = a;
    a = b;
    b = temp;

    printf("After Swaping a=%d , b=%d", a, b);
    
}

// Swap without third variable
void SwapNumWithOutThirdVariable()
{
    int a, b;
    printf("Enter the First number :");
    scanf("%d", &a);

    printf("Enter the Second Number :");
    scanf("%d", &b);

    printf("Before Swaping a=%d , b=%d\n", a, b);
  
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After Swaping a=%d , b=%d", a, b);
}

//Celcius to fahrenheit
void ConvetTemperature()
{
    float temp;
    float result; 
    printf("Enter the temperature in Celsius :");
    scanf("%f", &temp);
    result = (temp * 9 / 5) + 32;
    printf("temperature in Fahrenheit is : %0.3f",result);

}

#pragma endregion

#pragma region Decison Making (if ,else , nested if else)

void CheckLeapYear()
{
    int year;
    printf("Enter the year");
    scanf("%d", &year);

    if (year%400==0)
    {
        printf("%d is Leap year", year);
    }
    else if(year%4==0)
    {
        printf("%d is Leap year", year);
    }
    else
    {
        printf("%d is not Leap year", year);
    }
}




#pragma endregion

#pragma region Looping (for , while ,do while)

void PrintNum()
{
    int num, i;
    printf("Enter the number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d",i);
        printf("\n");
    }

}

void FibSeries()
{
    int a = 0, b = 1, c, num;
    printf("Enter how many terms to print: ");
    scanf("%d", &num);

    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 2; i < num; i++)
    {
        c = a + b;
        printf("%d\n", c);

        a = b;
        b = c;
    }
}

void CheckArmStrong()
{
    int num, result=0 , reminder , orgNum; 
    printf("Enter the number : ");
    scanf("%d", &num);
    orgNum = num;
    while (num!=0)
    {
        reminder = num % 10;
        result += reminder * reminder * reminder  ;
        num /= 10;
    }
    if (result ==orgNum)
    {
        printf("Enter number is ArmStrong");
    }
    else
    {
        printf("Enter number is not ArmStrong");
    }
}

#pragma endregion

#pragma region Pattern Printing 

void SquarePattern()
{
    for (int i = 0; i < 4; i++)
    {
        printf("****");
        printf("\n");
    }
}

void RightTriangle()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void InvertedTriangle()
{
    for (int i = 4; i >0; i--)
    {
    //    printf("Iteration 1 value of i  %d \n", i);
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Pyramid()
{
    for (int i = 0; i < 4; i++)
    {
        for (int space = 0; space < 4; space++)
        {
            for (int j = 0; j < 4; j++)
            {

            }
        }
    }
}

#pragma endregion



