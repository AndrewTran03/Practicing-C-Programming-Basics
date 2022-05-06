#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    int numInput, remainder;
    printf("Enter a number: ");
    scanf("%d", &numInput);

    remainder = numInput % 2;
    if(remainder == 0) {
        printf("The number you entered (%d) is even\n", numInput);
    }
    else {
        printf("The number you entered (%d) is odd\n", numInput);
    }

    printf("Enter another number: ");
    scanf("%d", &numInput);
    int sign;

    if(numInput < 0) {
        sign = -1;    
    }
    else if(numInput > 0) {
        sign = 1;
    }
    else {
        sign = 0;
    }
    printf("The second number you entered (%d) has the following sign: %d\n", numInput, sign);

    printf("Enter a third number: ");
    scanf("%i", &numInput);

    int x = numInput > 7 ? 25:50;
    printf("Value of x: %d\n", x);
    return 0;
}