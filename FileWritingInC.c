#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  /*
  File Writing in C:
  int fputc(int char, FILE *pFile)
  -Writes a single character to a text file
  -First Argument: Character that is to be written to the file
  -Second Argument: File / Stream Pointer
  -Returns the character that was written if successful and EOF if there was a failure

  int fputs(char char * str, FILE *pFile)
  -Writes a string to any file or stream
  -First Argument: Pointer to the character string that is to be written to the file
  -Second Argument: File / Stream Pointer
  -Function will write characters from a string until it reaches a '\0' chracter
  -Does not write the null terminator character to the file
  -Can complicate reading back variable-length strings from a file that have been written by fputs()
  -Expecting to write a line of text that has a newline character at the end

  int fprintf(FILE *pFile, const char *format)
  -Writes out formatted output to a file or stream
  -First Argument: File / Stream Pointer
  -Second Argument: Formatted output (string) that will be written out to the file specified
  -Useful for C-styled strings that contains one or more of the following: whitespace, non-whitespace character, format specifiers, etc.
  -Usage is similar to printf() function but sends output to a file
  */
  FILE *pFile = NULL;
  int ch;

  pFile = fopen("WriteFile.txt", "w+");
  for(ch = 33; ch <= 100; ch++) 
  {
    fputc(ch, pFile);
    fputs("\n", pFile);
  }
  fputs("\n", pFile);
  fputs("This course is written by Jason Fedin\n", pFile);
  fputs("I am happy to be here\n", pFile);

  fprintf(pFile, "%s %s %s %s %d\n", "Hello", "my", "number", "is", 123456);

  fclose(pFile);
  pFile = NULL;

  return 0;
}