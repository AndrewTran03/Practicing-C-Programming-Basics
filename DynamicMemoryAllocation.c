#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    //Dynamic Memory Allocation
    
    //First Way: malloc() - One Argument: Total Memory to Allocate
    int* firstPtr = NULL;
    //firstPtr = (int*)malloc(100);
    //Requested 100 bytes of memory and assigned the address of the memory block to firstPtr
    //Can hold 25 integers on my laptop because each integer is 4 bytes

    //Removes the assumption that ints are only 4 bytes (flexible for any operating-system)
    firstPtr = (int*)malloc(25 * sizeof(int));

    //malloc() returns a void* so you need to cast to <pointer type>* (in this case: int*)

    //Problem: If the memory requested CANNOT BE ALLOCATED FOR ANY REASON, malloc() returns a pointer to NULL

    //Always good to check if the dynamic memory request is valid or not
    /* 
    firstPtr = (int*)malloc(25 * sizeof(int));
    if(!firstPtr)
    {
        //Code to deal with memory allocation failure
    }
    */

    //Second Way: calloc() - Two Arguments: 1) Number of Items for which Space is Required, 2) Size of Each Item
    //Advantage: Initializes the memory that is allocated so that all bytes are 0
    int* secondPtr = NULL;
    secondPtr = (int*)calloc(25, sizeof(int));

    //Third Way: realloc() - Two Arguments: 1) Pointer containing an address that was previously returned by a call
    //to malloc() or calloc(), 2) Size in bytes of the new memory that you want allocated
    //Use Case: Enables you to reuse or extend memory that you previously attached using malloc() or calloc()
    //IMPORTANT TO KNOW: realloc() preserves the content of the original memory area
    secondPtr = (int*)realloc(secondPtr, 50 * sizeof(int));

    //Free Dynamic Memory Back to System
    free(firstPtr);
    firstPtr = NULL;

    free(secondPtr);
    secondPtr = NULL;
    
    return 0;
}