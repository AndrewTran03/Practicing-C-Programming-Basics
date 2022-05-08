#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Declarations
int arraySum(int array[], const int n);

int main(int argc, char* argv[])
{
    //Creating/Declaring an array of integers
    int values[100];

    //Creating a pointer that can access each value in the array
    //NOT THE SAME as a "Pointer to the array itself"
    int* valuePtr = NULL;

    //Sets valuesPtr to point to the first element in the values array
    valuePtr = values;

    /*
    Note: The address of the pointer is NOT USED!
    -The C complier treats the appearance of an array name without a subscript as a pointer of the array
    -Specifying values without a subscript has the effect of producing a pointer to the element of values
    */

    //ANOTHER EQUIVALENT WAY TO POINT TO THE FIRST ELEMENT: 
    //valuePtr = &values[0];
    
    //To Traverse the Array: <pointer>[i] or *(<pointer> + i) 
    //Incrementation expressions such as <pointer>++ only work if the variable is a pointer variable itself

    //Pointer Arithmetic
    //Access/Change a certain value in the array
    //*(valuesPtr + i)
    
    //E.g. Assign values[10] equal to 27
    //values[10] = 27;
    //OR
    *(valuePtr + 10) = 27;

    //E.g. Move from values[0] to values[1]
    valuePtr = &values[1];
    //OR
    //valuePtr += 1;
    //OR 
    //valuePtr++;

    //First Example
    int moreValues[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum is %i\n", arraySum(moreValues, 10));


    //A Second Example
    char multiple[] = "a string";
    char* charPtr = multiple;

    for(int i = 0; i < strlen(multiple); i++)
    {
        printf("multiple[%d] = %c, *(charPtr + %d) = %c, &multiple[%d] = %p, charPtr + %d = %p\n",
                i, multiple[i], i, multiple[i], *(charPtr + i), &multiple[i], i, charPtr + i);
    }

    //A Third Example
    long multiple2[] = {15L, 25L, 35L, 45L};
    int i;
    long* multiplePtr = multiple2;
    for(i = 0; i < (sizeof(multiple2) / sizeof(multiple2[0])); i++) 
    {
        printf("Address longPtr + %d (&multiple[%d]): %llu             *(longPtr + %d)       value: %ld\n",
                i, i, (unsigned long long)(multiplePtr + i), i, *(multiplePtr + i));
    }
    printf("Type Long occupies: %d bytes \n", (int)sizeof(long));
    return 0;
}

int arraySum(int array[], const int n) 
{
    int sum = 0;
    int* ptr = NULL;
    int* const arrayEnd = array + n;

    for(ptr = array; ptr < arrayEnd; ptr++) 
    {
        sum += *ptr;
    }
    return sum;
}

/*
//Could have written this as well:
int arraySum(int* array, const int n)
{
    int sum = 0;
    int * const arrayEnd = array + n;
    for(; array < arrayEnd; array++)
    {
        sum += *(array);
    }
    return sum;
}
*/