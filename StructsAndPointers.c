#include <stdio.h>
#include <stdlib.h>

//From StructBasics.c:
struct date
{
    int month;
    int day;
    int year;
};

//You can also have a pointer be a member of a structure
struct intPointers
{
    int* p1;
    int* p2;
};

int main(int argc, char* argv[])
{
    struct date todaysDate;
    
    //Defining a variable to a pointer to a struct
    struct date *datePtr;

    //Assigning the pointer to the address of a data type (like regular pointers)
    datePtr = &todaysDate;

    //You can indirectly access any of its members of the date struct pointed with the pointer
    (*datePtr).day = 21;

    //Structs and Pointers have a special syntax for accessing members a struct data type via a pointer: "->"
    datePtr->day = 24;

    //Example:
    struct date newDate;
    datePtr = &newDate;
    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;
    printf("Today's date is %i/%i/%.2i\n", datePtr->month, datePtr->day, datePtr->year % 100);

    struct intPointers pointers;
    /*NOTE: 
    -Pointers itself is NOT a pointer, but a structure variabe that CONTAINS two pointers as its members
    */
    int firstInt = 100;
    int secondInt;

    pointers.p1 = &firstInt;
    pointers.p2 = &secondInt;
    *pointers.p2 = 97;

    printf("FirstInt = %i, *pointers.p1 = %i\n", firstInt, *pointers.p1);
    printf("SecondInt = %i, *pointers.p2 = %i\n", secondInt, *pointers.p2);
    
    return 0;
}