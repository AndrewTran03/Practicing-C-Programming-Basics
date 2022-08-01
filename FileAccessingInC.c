#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
File Operations:
fopen() - Function that opens the file and specifies the operation to which we alter or access the file specified
"w" = Write, "a" = Append, and "r" = Read
*/
int main(int argc, char *argv[])
{
    FILE *pFile = NULL;
    char *fileName = argv[1]; 
    //char *fileName = "TextFile.txt";
    pFile = fopen(fileName, "r"); //Open TextFile.txt to write to it
    if(pFile == NULL)
    {
      fileName = "TextName.txt";
      printf("Failed to open %s\n", fileName);
      return -1;
    }
    printf("Accessed File Successfully!\n");
    /*
    Renaming a File:
    int rename(const char *oldName, const char *newName);
    -Returns 0 if successful or nonzero value if not
    */
    fclose(pFile); //Closes the file associated with pFile - Closing it right after usage is important to protect against data loss
    pFile = NULL;
    //Always close the file before renaming or removing the file specified!
    /*
    Removing/Deleting a File:
    remove(const char *fileName);
    -Returns 0 if successful or nonzero value if not
    */
    return 0;
}