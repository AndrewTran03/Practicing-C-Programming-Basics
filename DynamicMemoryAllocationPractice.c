#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* agrv[])
{
    char* str = NULL;

    //Initial Memory Allocation
    str = (char*)malloc(15 * sizeof(char));
    strcpy(str, "Andrew");
    printf("String = '%s', Address = '%p'\n", str, str);

    //Reallocating Memory
    str = (char*)realloc(str, 25 * sizeof(char));
    strcat(str, ".com");
    printf("String = '%s', Address = '%p'\n", str, str);

    //Freeing Memory Allocation
    free(str);
    str = NULL;

    /*
    Suggestions for Handling Dynamic Memory Allocation:
    
    -Avoid allocating lots of small amounts of memory
    1) Allocating memory on the heap carries some overhead with it
    2) Allocating many small blocks of memory will carry much more overhead than allocating fewer larger blocks
    -Only hang on to the memory as long as you need it (once done: FREE it)
    1) As soon as you are finished with a block of memory on the heap, release the memory
    -Always ensure that you provide for releasing memory that you have allocated
    1) Decide where in your code you will release the memory when you write the code that allocates it
    -Make sure you do NOT inadvertently overwrite the address of memory you have allocated on the heap before you
    have released it
    1) Will cause a memory leak
    2) Be especially careful when allocating memory within a loop 
    */
    return 0;
}