#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  /*
  File Positioning in C:
  -Two Main Aspects:
  a) Finding out where you are in the file (current location)
  b) Moving to a given point in the file (relocation)
  
  long ftell(FILE *pFile)
  -Argument: File / Stream Pointer
  -Returns a long integer value that specifies the current position in the file
  -Value is the offset (bytes) from the beginning of the file

  int fgetpos(FILE *pFile, const fpos_t *position)
  -First Argument: File / Stream Pointer
  -Second Argument: Pointer to the type defined in <stdio.h>: fpos_t is a type that is able to recoerd every position within that file
  -Stores the current position and file state information for the file in 'position'
  -Returns 0 if the operation is successful and a nonzero integer for failure

  int fsetpos(FILE *pFile, const fpos_t *position)
  -First Argument: File / Stream Pointer
  -Second Argument: Pointer that is of the f_pos type
  -Variable 'position' was previously set by a call to fgetpos()
  -Moves the file pointer to the value returned by fgetpos() and only works for a place in the file you have been before
  -Returns 0 if the operation is successful and a nonzero integer for failure
  -Difference is that fseek() allows you to go to any position just by specifying the appropriate byte offset

  int fseek(FILE* pFile, long offset, int origin)
  -First Argument: File / Stream Pointer
  -Second / Third Arguments: Where you want to go in the file
  -Second Argument: Offset from a reference point specified in the third parameter
  a) SEEK_SET: Beginning of file
  b) SEEK_CUR: Current position in the file
  c) SEEK_END: End of file
  -For a text mode file, the second argument must be a value returned by ftell() function
  -Third Argument for text mode files must be SEEK_SET
  a) Text Files: All operations with fseek() are performed with reference to the beginning of the file
  b) Binary Files: Offset argument is simply a relative byte count
  -Can therefore supply +/- values for the offset when the reference point is specified as SEEK_CUR
  */

  FILE* pFile = NULL;
  char* fileName = "TextFile.txt";
  pFile = fopen(fileName, "r+");
  if(pFile == NULL) 
  {
    printf("Error opening file");
    return -1;
  }
  
  char str[60];
  //Read in each line (string) of the 
  //fpos_t position;
  while(fgets(str, 60, pFile) != NULL)
  {
    //Prints the current number of bytes offset from beginning of file
    int currentLength = ftell(pFile);
    printf("Length Currently: %d\n", currentLength);
  }
  int totalFileLength = ftell(pFile);
  fclose(pFile);
  pFile = NULL;

  printf("Total Size of %s = %d bytes\n", fileName, totalFileLength);
  
  pFile = fopen("WriteFile2.txt", "w+");
  fpos_t position;
  fgetpos(pFile, &position);
  fputs("Hello Andrew!", pFile);
  fsetpos(pFile, &position);
  fputs("This is going to override the previous content! ", pFile);

  fclose(pFile);
  pFile = NULL;

  pFile = fopen("WriteFile2.txt", "w+");
  fputs("This is Andrew", pFile);
  fseek(pFile, 8, SEEK_SET);
  fputs("Hello how are you?", pFile);

  fclose(pFile);
  pFile = NULL;

}