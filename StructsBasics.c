#include <stdio.h>
#include <stdlib.h>

//A structure declaration describes how a structure is put together (what elements are inside a structure)

//The struct keyword enables you to define a collection of variables of various types called a structure that you
//can treat a single unit

//Struct Declarations
struct date 
{
    int month;
    int day;
    int year;
};

struct BirthdayMonth 
{
    int numericalDay;
    char letterMonth[3];
};

int main(int argc, char* argv[])
{
    struct date today;
    today.month = 5;
    today.day = 8;
    today.year = 2022;
    printf("Today's date is %i/%i/%i\n", today.month, today.day, today.year % 100);

    struct date myDates[10];
    myDates[1].month = 8;
    myDates[1].day = 8;
    myDates[1].year = 1986;

    return 0;
}