#include <stdio.h>
#include <stdlib.h>

/*
Any non-main functions should be declared before main()
to avoid "implicit declaration of function or you need to
explicitly define the function before main().

void add() 
{
    printf("ADD!");
}
*/
void add();

int main(int argc, char* argv[])
{
    add();
    return 0;
}

void add() 
{
    printf("ADD!\n");
}