#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct Declarations
//From StructBasics.c:
struct date
{
    int month;
    int day;
    int year;
};

struct month
{
    int numberOfDays;
    char monthName[3];
};

int main(int argc, char* argv[])
{
    //You can also combine the concepts of structs and arrays together to get an array of structs (which is valid and powerful in C)
    
    struct date myDates[10] = {{12,10,1975}, {12,30,1980}, {11,15,2005}}; //Only initialize the first 3 elements of the struct array

    //Inner pairs of braces are optional - ALSO VALID BELOW (Recommendation to put braces to signify each element for code transparency)
    //struct date myDates[10] = { 12,10,1975, 12,30,1980, 11,15,2005};
    myDates[6].month = 8;
    myDates[6].day = 8;
    myDates[6].year = 1986;

    struct date myDatesNew[5] = {[2] = {6, 29, 2015}};

    struct date myDatesOld[5] = {[1].month = 12, [1].day = 16};

    //You can also have structs that CONTAIN arrays
    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.monthName[0] = 'J';
    aMonth.monthName[1] = 'a';
    aMonth.monthName[2] = 'n';

    //OTHER WAYS to Efficiently Assign Character Arrays (C-Styled Strings):
    struct month anotherMonth = {30, {'F', 'e', 'b'}};

    struct month aThirdMonth;
    aThirdMonth.numberOfDays = 31;
    strncpy(aThirdMonth.monthName, "Feb", strlen(aThirdMonth.monthName) + 1); //Always allocate one extra spot for null-terminating character '\0' for C-Styled Strings
    printf("Month Name: %s\n", aThirdMonth.monthName);

    struct month monthsInYear[12];

    return 0;
}