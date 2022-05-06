#include <stdio.h>
#include <stdlib.h>

//Defining Constants (Way #1)
#define TAX_RATE 15
#define FLOAT_NUM 2431.809
#define SINGLE_CHAR 'a'
#define FIRST_STR "Hello, my name is Andrew Tran"

int main(int argc, char* argv[]) 
{
    //In C: Strings are NOT a data type but an array of character
    /*
    Remember:
    -Each string has an '\0' to represent the null terminator 
    character, so always allocate one extra space for it into 
    your string creation.
    -When declaring strings, don't explicitly define the size.
    Let the system figure out this.
    */
    char message[] = "hello";
    printf("The message is %s\n", message);

    /* //User Input as a String
    char name[100];
    printf("Enter your name: ");
    // Strings are already pointers, so we don't have to find its 
    // address(&) like primitive types!
    scanf("%s", name);
    printf("Your name: %s\n", name);
    */

    char str1[] = "To be or not to be";
    char str2[] = ",that is the question";
    
    //Find the Size of the String
    unsigned int count = 0;
    while(str1[count] != '\0')
    {
        printf("Character %u: %c\n", count, str1[count]);
        count++;
    }
    printf("Size of First String: %u\n", count);
    printf("The size of the string (%s) is %d characters\n", str1, count);

    count = 0;
    while(str2[count] != '\0')
    {
        printf("Character %u: %c\n", count, str2[count]);
        count++;
    }
    printf("Size of First String: %u\n", count);
    printf("The size of the string (%s) is %d characters\n", str2, count);

    char str3[] = FIRST_STR;
    count = 0;
    while(str3[count] != '\0')
    {
        printf("Character %u: %c\n", count, str3[count]);
        count++;
    }
    printf("Size of First String: %u\n", count);
    printf("The size of the string (%s) is %d characters\n", str3, count);
    
    //Defining Constants (Way #2)
    const char errorMsg[] = "DANGER! STOP NOW!";

    //Defining Constants (Way #3)
    enum month {January, Feburary, March, April, May, June, July, August, September, October, November, December};
    
    return 0;
}