#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1; //Get address of num1
    *pNum = 2L; //Set num1 to 2
    ++num2; //Increment num2
    num2 += *pNum; //Add num1 to num2

    pNum = &num2; //Get address of num2
    ++*pNum; //Increment num2 indirectly;

    printf("num1 = %ld, num2 = %ld, *pNum = %ld, *pNum + num2 = %ld\n",
            num1, num2, *pNum, *pNum + num2);
    
    //NOTE: NEVER DEFEFERENCE AN UNINITIALIZED POINTER!
    /*
    int* ptr; //an uninitialized pointer
    *ptr = 5; //a TERRIBLE ERROR
    */

    return 0;
}