#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    //While Loops
    int count = 1;
    while(count < 5) {
        printf("Inside 1st While-Loop\n");
        printf("%i\n", count);
        count++;
    }

    int num = 0;
    scanf("%d", &num);
    while(num != -1) {
        scanf("%d", &num);
    }
    printf("Done with this Loop\n");

    int userInput = 0;
    int counter = 1;
    do {
        counter++;
        scanf("%d", &userInput);
    }
    while(userInput < 200);
    printf("Done with this loop\n");

    return 0;
}