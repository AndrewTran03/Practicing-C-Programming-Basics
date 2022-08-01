#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) 
{
  char* fileName = "LowercaseTest.txt";
  char* tempFileName = "UppercaseTemp.txt";
  FILE* readFilePtr = NULL;
  FILE* writeFilePtr = NULL;

  char ch;

  readFilePtr = fopen(fileName, "r");
  if(readFilePtr == NULL) 
  {
    return -1;
  }
  
  //Creates a temp file
  writeFilePtr = fopen(tempFileName, "w");
  if(writeFilePtr == NULL)
  {
    return -1;
  }

  while((ch = fgetc(readFilePtr)) != EOF)
  {
    if(islower(ch))
    {
      ch = ch - 32;
    }
    fputc(ch, writeFilePtr);
  }

  fclose(readFilePtr);
  readFilePtr = NULL;
  fclose(writeFilePtr);
  writeFilePtr = NULL;

  //Rename temp file to "LowercaseTest.txt"
  rename(tempFileName, fileName);

  //Remove the temp file
  remove(tempFileName);

  //Display the new, updated contents of "LowercaseTest.txt"
  readFilePtr = fopen(fileName, "r");
  if(readFilePtr == NULL) 
  {
    return -1;
  }
  
  while((ch = fgetc(readFilePtr)) != EOF)
  {
    printf("%c", ch);
  }
  printf("\n");

  fclose(readFilePtr);
  readFilePtr = NULL;

  return 0;
}