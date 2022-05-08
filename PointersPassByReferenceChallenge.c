#include <stdlib.h>
#include <stdio.h>

//Function Declarations
void square(int* x);

int main(int argc, char* argv[])
{
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   square(&num);
   printf("The square of the given number is %d!\n", num); //25

   return 0;
}

void square(int* const x)
{
    *x = (*x) * (*x);
}