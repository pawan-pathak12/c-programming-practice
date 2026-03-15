/*#include <stdio.h>

// 1. Circle calculations
void circleCalculations(float r) {
    float diameter = 2 * r;
    float circumference = 2 * 3.1416 * r;
    float area = 3.1416 * r * r;
    printf("\nCircle with radius %.2f:\n", r);
    printf("Diameter = %.2f\n", diameter);
    printf("Circumference = %.2f\n", circumference);
    printf("Area = %.2f\n", area);
}

// 2. Even/Odd check
int isEven(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

// 3. Swap using call by reference
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 4a. Factorial using recursion
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// 4b. Sum of first N natural numbers using recursion
int sumNatural(int n) {
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}

// 4c. Fibonacci using recursion
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Circle calculations
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    circleCalculations(radius);

    // Even/Odd check
    int num;
    printf("\nEnter an integer to check even/odd: ");
    scanf("%d", &num);
    if (isEven(num))
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    // Swap using call by reference
    int a, b;
    printf("\nEnter two numbers to swap: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    // Factorial
    int n;
    printf("\nEnter a number for factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, factorial(n));

    // Sum of N natural numbers
    printf("\nEnter N for sum of natural numbers: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers = %d\n", n, sumNatural(n));

    // Fibonacci series
    printf("\nEnter number of terms for Fibonacci: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
*/