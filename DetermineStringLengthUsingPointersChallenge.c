#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Declarations
int stringLength(const char* string);

int main(int argc, char* argv[])
{
    //Testing stringLength()
    printf("%d \n", stringLength("stringLength test"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("Andrew Tran"));
    printf("%d \n", stringLength("Jason"));

    return 0;
}

int stringLength(const char* string)
{
    const char* lastAddress = string;
    //int charCount = 0;
    while(*lastAddress)
    {
        lastAddress++;
        //charCount++;
    }
    return lastAddress - string; //charCount;
}
