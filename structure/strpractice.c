#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

struct  Student
{
    int roll;
    char Name[30];
    float marks; 
};
int main() {

    /* Q1 — Basic Structure :
       Define a structure Student (name, roll, marks).
       Read details of one student and display them.
    
    struct Student s;

    printf("Enter the roll: ");
    scanf("%d", &s.roll);

    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    getchar(); 

    printf("Enter the name: ");
    gets(s.Name);


    printf("\nEntered details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.Name, s.roll, s.marks);

    return 0;
    */




    /* Q2 — Structure with Array :
       Define structure Student (name, roll, marks).
       Read details of 5 students and display all.
    */
    struct Student s[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Enter the Detail of %d student\n", i+1);
        printf("Enter the roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter the marks: ");
        scanf("%f", &s[i].marks);

        getchar();

        printf("Enter the name: ");
        gets(s[i].Name);
    }

    printf("\nStored Data of Student : \n");
    for ( i = 0; i < 5; i++)
    {
        printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s[i].Name, s[i].roll, s[i].marks);
    }

    /* Q3 — Structure Calculation :
       Define structure Student.
       Read details of 5 students and find the one with highest marks.
    */

    /* Q4 — Structure with Average :
       Define structure Student.
       Read details of 5 students and calculate average marks.
    */

    /* Q5 — Structure with Condition :
       Define structure Student.
       Read details of 5 students and display those with marks > 50.
    */

    /* Q6 — Structure Pointer :
       Define structure Student (name, roll, marks).
       Use a structure pointer and -> operator to read and display one student.
    */

    /* Q7 — Structure Array with Pointer :
       Define structure Student.
       Create array of 5 structures.
       Use pointer arithmetic (ptr+i) to read and display details.
    */

    /* Q8 — Structure + DMA (Important) :
       Ask user for number of students.
       Allocate memory using malloc for Student structure.
       Store name, roll, marks and display all using pointer notation.
    */

    return 0;
}