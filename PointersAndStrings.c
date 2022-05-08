#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Declarations
void copyString1(char src[], char dest[]);
void copyString2(char *src, char *dest);
void copyString3(char* src, char* dest);

int main(int argc, char* argv[])
{
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString3(string1, string2);
    printf("String 2: '%s'\n", string2);
    
    return 0;
}

//Copy strings using arrays
void copyString1(char src[], char dest[])
{
    int i;
    for(i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

//Copy strings using pointers
void copyString2(char* src, char* dest)
{
    for(; *src != '\0'; src++, dest++)
    {
        *dest = *src;
    }
    *dest = '\0';
}


//Copying strings using pointers (optimized)
void copyString3(char* src, char* dest)
{
    while(*src) //the null character is equal to the value of 0, so will jump out then
    {
        //*dest++ = *src++;
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}