#include <stdio.h>
#include <stdbool.h>

int main() {
    enum primaryColor {red, yellow, blue};
    enum month {January, Feburary, March, April, May, June, July, August, September, October, November, December};
    enum direction {up, down, left= 10, right};
    int firstNum = 32;
    float secondNum = 3.234;
    double thirdNum = 23432.123212415123213213;
    _Bool boolean1 = 1;
    bool boolean2 = true; //Only if you use the #include <stdbool.h>
    unsigned int fourthNum = 1342; // Only positive values
    signed int fifthNum = -45867; // Positive and negative values
    enum primaryColor myColor, otherPersonColor;
    myColor = red;
    otherPersonColor = yellow;
    enum month firstMonth;
    firstMonth = April;
    char broiled = 'T';
    char firstChar;
    firstChar = '0';
    char x = '\n'; //New Line Character
    char secondChar = 'A';
    enum gender {male, female};
    enum gender myGender = male;
    enum gender anotherGender = female;
    bool isMale = (myGender == anotherGender);
    int sum = 89;
    printf("The sum is %d\n", sum);
    printf("%c", x);
    printf("%c\n", secondChar);
    printf("Data Value for First Value in Enum: %d\n", myGender);
    printf("Data Value for Second Value in Enum: %d\n", anotherGender);
    int age = 20;
    int* pAge = &age;
    printf("Value of Age: %d", *pAge);
    return 0;
}