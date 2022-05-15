#include <stdio.h>
#include <stdlib.h>

//Struct Declarations
struct employee 
{
    char name[30];
    char date[15];
    float salary;
};

int main(int argc, char* argv[])
{
    //Declaration and initialization of a structure variable

	struct employee emp={"Mike","7/16/15",76909.00f};

	printf("\nName: %s", emp.name);
	printf("\nHire Date: %s", emp.date);
	printf("\nSalary: %.2f\n", emp.salary);

	printf("\nEnter employee information: \n");

	printf("Name: ");
	scanf("%s", emp.name);

	printf("\nHire Date: ");
	scanf("%s", emp.date);

	printf("\nSalary: ");
	scanf("%f", &emp.salary);

	printf("\nName: %s", emp.name);
	printf("\nHire Date: %s", emp.date);
	printf("\nSalary: %.2f\n", emp.salary);

    return 0;
}