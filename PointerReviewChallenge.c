#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int number = 5678;
    int* pNumber = &number;

    printf("Address of the Pointer: %p\n", (void*)&pNumber); //Output the address of the pointer
    printf("(Address) Value of the Pointer Itself: %p\n", pNumber); //Output the value of the pointer
    printf("Value Stored at that Pointer Address: %d\n", *pNumber); //Output the value of what the pointer is pointing to
    
    return 0;
}