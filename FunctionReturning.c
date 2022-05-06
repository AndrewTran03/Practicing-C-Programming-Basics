#include <stdlib.h>
#include <stdio.h>
#include "FunctionReturning.h"

int main(int argc, char* argv[]) 
{
    float add = addTwoNumbers(6, 3);
    printf("Addition: %.2f\n", add);
    printf("Subtraction: %.2f\n", subtractTwoNumbers(6,3));
    printf("Multiplication; %.2f\n", multiplyTwoNumbers(6,3));
    printf("Division: %.2f\n", divideTwoNumbers(6,3));
    printf("Division By Zero is NOT allowed. You would get %.2f.\n", divideTwoNumbers(6,0));
    return 0;
}

float addTwoNumbers(float a, float b)
{
    return a + b;
}

float subtractTwoNumbers(float a, float b) 
{
    return a - b;
}

float multiplyTwoNumbers(float a, float b)
{
    return a * b;
}

float divideTwoNumbers(float a, float b) 
{
    if(b == 0)
    {
        return 0.00;
    }
    else 
    {
        return a / b;
    }
}