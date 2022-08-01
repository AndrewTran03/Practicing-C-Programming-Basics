#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  char ch;
  int lineCount = 0;
  
  char* fileName = "TextFile.txt";
  FILE* pFile = fopen(fileName, "r+");
  if(pFile == NULL)
  {
    perror("Status of File");
    return -1;
  }

  while((ch = fgetc(pFile)) != EOF)
  {
    if(ch == '\n')
    {
      lineCount++;
    }
  }
  printf("Total Number of Lines in %s: %d lines\n", fileName, ++lineCount);

  fclose(pFile);
  pFile = NULL;
  return 0;
}