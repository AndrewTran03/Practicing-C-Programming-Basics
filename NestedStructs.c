#include <stdio.h>
#include <stdlib.h>

//You can also nest(place) structures (within other structures) as one or more of its members

//Struct Declarations
//From StructBasics.c:
struct date
{
    int month;
    int day;
    int year;
};

struct time
{
    int hour;
    int minute;
    int second;
};

//New Concept in Action: Nested Structures
struct dateAndTime
{
    struct date sDate;
    struct time sTime;
};

//Structure within a structure (for more restricted capability)
struct TimeCopy
{
    struct DateCopy
    {
        int month;
        int day;
        int year;
    } dob; //Variable to access DateCopy data members

    int hour;
    int minute;
    int second;
};
/*
Restrictions of this Option for the TimeCopy Structure:
-Does NOT exist outside of the outer-struct (in this case: TimeCopy)
-Becomes impossible to declare a DateCopy struct variable external to the TimeCopy structure
*/

int main(int argc, char* argv[])
{
    //Define a Nested Structure
    struct dateAndTime event;
    
    event.sDate.month = 10;
    event.sTime.second++;

    struct dateAndTime event2 = {{2, 1, 2015}, {3, 30, 0}}; //Read as Feb 1, 2015 at 3:30:00

    //You can also use members' names in the initialization just like with regular structs
    struct dateAndTime event3 = {{.month = 5, .day = 13, .year = 2022},
                                 {.hour= 2, .minute = 37, .second = 45}};
    
    //You can go even further and create an ARRAY of dateAndTime structures
    struct dateAndTime events[100];

    //Set first time in the array to noon
    events[0].sTime.hour = 12;
    events[0].sTime.minute = 0;
    events[0].sTime.second = 0;

    return 0;
}