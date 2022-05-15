#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define FUNDLEN 100

//Struct Declarations
struct Family
{
    char name[20];
    int age;
    char fatherName[20];
    char motherName[20];
};

struct Funds
{
    char bank[FUNDLEN];
    double bankFund;
    char save[FUNDLEN];
    double saveFund;
};

//Function Declarations
struct Family myFunction(void); //Able to return a structure from a function
bool siblings(struct Family member1, struct Family member2);
bool siblings2(struct Family *pMember1, struct Family *pMember2);
bool siblings3(struct Family const *pMember1, struct Family const *pMember2);
bool siblings4(struct Family *const pMember1, struct Family *const pMember2);
double sum(struct Funds person);

int main(int argc, char* argv[])
{
    struct Funds personStan = {"Garlic-Melon Bank", 
                                4032.27, 
                                "Lucky's Savings and Loans", 
                                8543.94};
    printf("Stan has a total of $%.2f across both financial institutions\n", sum(personStan));
    return 0;
}

bool siblings(struct Family member1, struct Family member2)
{
    if(strcmp(member1.motherName, member2.motherName) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool siblings2(struct Family *pMember1, struct Family *pMember2)
{
    if(strcmp(pMember1->motherName, pMember2->motherName) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Will NOT allow any modification to the struct pointers' members (values) (MORE USEFUL)
bool siblings3(struct Family const *pMember1, struct Family const *pMember2)
{
    if(strcmp(pMember1->motherName, pMember2->motherName) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//Will NOT allow any modification to the struct pointers' address (NOT AS USEFUL)
bool siblings4(struct Family *const pMember1, struct Family *const pMember2)
{
    if(strcmp(pMember1->motherName, pMember2->motherName) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double sum(struct Funds person)
{
    return (person.bankFund + person.saveFund);
}