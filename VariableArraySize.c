#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // size of "array" in bytes
    size_t size = sizeof(array);

    // number of MAX CAPACITY in "array" 
    size_t maxCapacity = sizeof(array) / sizeof(array[0]);

    int i;
    for(i = 0; i < maxCapacity; i++) {
        printf("Element %u in the Array: %i\n", i, array[i]);
    }

    /*
    size_t length = 0;
    while(array[length] != NULL) {
        printf("Element %u in the Array: %i\n", length, array[length]);
        length++;
    }
    printf("Actual Size of the Array: %u\n", length);
    */

    return 0;
}