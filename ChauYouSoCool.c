#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) 
{
	char message[200];
	printf("Enter a message: ");
	scanf("%s", message);

	printf("%s\n", message);
	return 0;
}
