#include <stdio.h>
#include <stdlib.h>
//Needed to do most basic string functions
#include <string.h>

/*
(Main/Basic) String Functions:
strlen() - Getting the length of a string
strcpy() and strncpy() - Copying one character string to another
strcat() and strncat() - Combining two character strings together (concatenation)
strcmp() and strncmp() - Determining two character strings are equal

//Searching Strings' Components
strchr() - Find the first location containing the character specifed within the string
strstr() - Find the first location containing the substring specifed within the string

//Tokenizing Strings
DEFINITION: A TOKEN is a sequence of characters within a string that is bounded by
a delimiter (space, dash, period, comma, etc.).
strtok() - Breaks a string into words / (smaller) phrases 

//Analyzing Strings
islower()
isupper()
isalpha()
isdigit()
*/
int main(int argc, char* argv[]) 
{ 
    //Find the length of the string
    char myString[] = "This is my string"; 
    printf("The length of the string (%s) is %d\n", myString, strlen(myString)); 
    
    //Copying strings from one string to another string
    char temp[10];
    //strncpy(char* dest, char* src, size_t n)
    strncpy(temp, myString, sizeof(temp) - 1); //Use strncpy() instead of strcpy() to avoid exceeding 
                                               //statically-allocated memory for that string (no buffer overflows)
    printf("The string is '%s' and has a length of %d\n", temp, strlen(temp));

    //Concatenating two strings together
    char myString2[] = "A New String Concated with...";
    
    char input[80];
    printf("Enter another phrase/string for concatentation: ");
    scanf("%s", input);

    printf("The string that you are concateninating with '%s' is '%s' makes ", myString2, input);
    printf("'%s'.\n", strcat(myString2, input));
    printf("It has length %d\n", strlen(myString2));

    char src[50], dest[50];
    strcpy(src, "This is the source");
    strcpy(dest, "This the destination");

    strncat(dest, src, 11);
    printf("The destination string is: %s\n", dest);

    //Comparing two strings
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A")); //Equal = 0

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B")); //Lesser = -1

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A")); //Greater = 1

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a")); //Lesser = -1

    printf("strcmp(\"Apples\", \"Apple\") is "); 
    printf("%d\n", strcmp("Apples", "Apple")); //Greater = 1
    
    //strncmp() compares the "prefix" or the first number of characters of both words

    //Searching a string
    char str[] = "The quick brown fox"; //The string to be searched
    char ch = 'q'; //The character that we are looking for
    char* pFoundChar = NULL; //Pointer initialized to NULL
    pFoundChar = strchr(str, ch); //Store address where p is found
    printf("%s\n", pFoundChar);

    char text[] = "Every dog has his day";
    char word[] = "dog";
    char* pFoundWord = NULL;
    pFoundWord = strstr(text, word);
    printf("%s\n", pFoundWord);
    return 0; 

    //String tokenizing
    char msg[80] = "Hello, how are you - my name is - Jason";
    const char s[2] = "-";
    char* token;
    
    token = strtok(msg, s);
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
}

