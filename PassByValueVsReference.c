#include <stdlib.h>
#include <stdio.h>

/*
Important Distinction-

Pass By Value: Makes a copy of the value and changes to a variable 
in a different function does not alter it in the original function

Pass By Reference: Changes to arguments in the arguments/parameters
can be altered if you change the value at the address (AKA the pointer)
*/

//Function Declarations
void swap(int x, int y);
void swap2(int* x, int* y);

int main(int argc, char* argv[])
{
    //For the most part, with primtive values, C is pass by VALUE
    
    //Local Variable Definitions
    int a = 100;
    int b = 200;

    printf("Before swap() is called, value of a: %d\n", a);
    printf("Before swap() is called, value of b: %d \n", b);

    swap(a, b);

    printf("After swap() is called, value of a: %d\n", a);
    printf("After swap() is called, value of b: %d \n", b);

    printf("\nNO CHANGE HERE!\n");

    int* ptrA = &a;
    int* ptrB = &b;

    printf("Before swap() is called, value of a: %d\n", *ptrA);
    printf("Before swap() is called, value of b: %d \n", *ptrB);

    swap2(ptrA, ptrB);

    printf("After swap() is called, value of a: %d\n", *ptrA);
    printf("After swap() is called, value of b: %d \n", *ptrB);

    printf("\nDOES CHANGE HERE!\n");
    return 0;
}

//Swap primitive values: Pass By Value
void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    return;
}

//Swap pointer values: (Simulates) Pass By Reference
void swap2(int* x, int* y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
    
    return;
}