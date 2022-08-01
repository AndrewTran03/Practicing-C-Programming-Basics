#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
  /* File Reading in C:
  -fgetc() function reads a character from any file or stream that has been opened for reading
  int mChar = fgetc(FILE* pFile);
  -mChar is of type 'int' because EOF will be returned once the end of the file has been reached
  rewind(FILE* pFile);
  -Reading the file of the contents of a file again when necessary: rewind() function moves the position of pFile (file pointer) back to the beginning

  -fgets() function reads a string from any file or stream that has been opened for reading
  char *fgets(char *str, int nChars, FILE *pFile)
  -Characters are read until either a '\n' is read or nChars - 1 characters have been read from the file stream (whichever comes first)
  -If a newline character '\n' is read, it is retained in the string (a '\0' will be appended to the end of the string)
  -No Error: fgets() returns the character pointer (str)
  -Error Occurs: NULL is returned
  -Reading EOF causes NULL to be returned

  -fscanf() reads in formatted input from a file or stream
  int fscanf(FILE* pFile, const char* format, ...)
  -First argument is the file pointer (pFile) to identify file or stream
  -Second argument is the format - useful for C-styled strings that contains one or more of the following: whitespace, non-whitespace character, format specifiers, etc.
  -Usage is similar to scanf() function but gets input from a file
  */
  FILE* pFile = NULL;

  //char *fileName = argv[1]; 
  char *fileName = "TextFile.txt";
  pFile = fopen(fileName, "r+");
  if(pFile == NULL)
  {
    fileName = "TextFile.txt";
    printf("Failed to open %s\n", fileName);
    return -1;
  }
  printf("Accessed File Successfully!\n");

  int currentChar;
  //Read a single character
  while((currentChar = fgetc(pFile)) != EOF) 
  {
    printf("%c", currentChar);
  }

  printf("\n");
  
  //Sets file pointer to the beginning of the file specified in fopen() function
  rewind(pFile);

  char str[60];
  //Read in a string
  while(fgets(str, 60, pFile) != NULL)
  {
    //Writes content to stdout
    printf("%s", str);
  }

  fclose(pFile);
  pFile = NULL;

  printf("\n");

  fileName = "TextFile2.txt";
  pFile = fopen(fileName, "r+");
  char str1[10], str2[20], str3[30];
  int year;
  if(pFile == NULL) 
  {
    printf("Unable to find %s!", fileName);
    return -1;
  }
  //Read in formatted input
  fscanf(pFile, "%s %s %s %d", str1, str2, str3, &year);
  printf("Read String 1 |%s|\n", str1);
  printf("Read String 2 |%s|\n", str2);
  printf("Read String 3 |%s|\n", str3);
  printf("Read Year |%d|\n", year);

  fclose(pFile);
  pFile = NULL;

  return 0;
}