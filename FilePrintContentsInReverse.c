#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) 
{
  int count = 0;
  int i = 0;

  FILE* pFile = fopen("TextFile.txt", "r");
  if(pFile == NULL)
  {
    return -1;
  }

  //Moves the file pointer to the end of the file 
  fseek(pFile, 0, SEEK_END);

  count = ftell(pFile);

  while(i < count)
  {
    i++;
    fseek(pFile, -i, SEEK_END);
    printf("%c", fgetc(pFile));
  }
  printf("\n");

  fclose(pFile);
  pFile = NULL;

  return 0;
}