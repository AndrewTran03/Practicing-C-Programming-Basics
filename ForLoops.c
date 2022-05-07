#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    //For Loops
    for(int i = 0; i < 10; i++) {
        printf("Inside 1st Loop\n");
        printf("%i\n", i);
    }

    for(int i = 1, j = 2; i <= 5; ++i, j = j + 2) {
        printf("Inside 2nd Loop\n");
        printf("%.5d\n", i*j);
    }

    unsigned long long sum = 0LL;
    unsigned int count = 0;

    //Read the number of integers to be summed
    printf("\nEnter the amount of numbers you want to sum: ");
    scanf("%u", &count);

    for(unsigned int i = 1; i <= count; i++) {
        printf("Inside 3rd Loop\n");
        sum += i;
    }

    printf("\nThe total of the first %u numbers is %llu \n", count, sum);

    //Infinite For-Loop 
    /*
    for( ;; ) {
        //Statements
    }
    */
    return 0;
}
