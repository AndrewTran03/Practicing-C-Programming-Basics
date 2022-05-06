#include <stdio.h>
#include <stdlib.h>
//How to Include a User-Defined Header File (Quotations)
#include "FunctionParametersAndArguments.h"

int main(int argc, char* argv[])
{
    multiplyTwoNumbers(2, 3);
    multiplyTwoNumbers(5.77, 4.66);
    multiplyTwoNumbers(15, 56.7);
    return 0;
}

void multiplyTwoNumbers(float a, float b)
{
    float result = a * b;
    printf("The product of %.2f and %.2f is: %.2f\n", a, b, result);
}