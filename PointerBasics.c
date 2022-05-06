#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int number = 0;
    int* pNumber = &number;
    printf("%d\n", *pNumber);
    printf("%p\n", pNumber);

    int count = 10;
    int* pCount = &count;
    int x;
    x = *pCount;
    printf("pCount's value (or address of count): %p\n", pCount);
    printf("p's value (or value after dereferencing pCount): %d\n", *pCount);
    printf("pCount's size: %d bytes", (int)sizeof(pNumber));

    int value = 0;
    int* pValue = NULL;

    value = 10;
    printf("Value's Address: %p\n", &number); //Output the address
    printf("Value Itself: %d\n", number); //Output the value

    pValue = &value;
    printf("pValue's Address: %p\n", (void*)&pValue); //Output the address of the pointer
    printf("pValue's Size: %zd bytes\n", sizeof(pValue)); //Output the size of the pointer (bytes)
    printf("pValue's Value: %p\n", pValue); //Output the value (an address)
    printf("pValue points this value: %d\n", *pValue); //Output the value at the pointer address
    return 0;
}