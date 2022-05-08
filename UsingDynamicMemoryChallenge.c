#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int size;
    char *text = NULL;

    printf("Enter limit of the text: \n");
    scanf("%d", &size); //Determines the memory size for the message

    text = (char*)malloc(size * sizeof(char)); //Dynamic Memory Allocation using malloc()

    if (text != NULL) //Dynamic Memory Allocation Validation Check
    {
        printf("Enter some text: \n");
        scanf("%s", text);

        printf("Inputted text is: %s\n", text);
    }

    //Free Dynamic Memory Allocation
    free(text);
    text = NULL;

    return 0;
}