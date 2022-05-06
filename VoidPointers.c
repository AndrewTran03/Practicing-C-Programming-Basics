#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    /*
    Void pointers can hold a pointer of any type (allowing flexibility).
    However, to use it in any operation, you need to explicitly cast it
    to the pointer of the appropriate type.
    */
    void* voidPtr = NULL;
    
    voidPtr = &i;
    printf("Value of i = %d\n", *(int*)voidPtr);

    voidPtr = &f;
    printf("Value of f = %.2f\n", *(float*)voidPtr);

    voidPtr = &ch;
    printf("Value of ch = %c\n", *(char*)voidPtr);

    return 0;
}