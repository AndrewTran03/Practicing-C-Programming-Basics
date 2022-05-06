#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    //Constants and Pointers
    long value = 9999L;
    const long* pValue = &value; //defines a pointer to a constant (value)
    //*pValue = 8888L; //ERROR - Attempt to change const value
    //You can still modify value as you only applied 'const' to the pointer
    value = 7777L; //OKAY - Value pointed has changed, but you did not the pointer
                   //to make the change
    //Changing the address that the pointer points to is STILL VALID
    long number = 8888L;
    pValue = &number;

    /*NOTE: (With "const value" pointers)
    -Still CANNOT use the pointer to change the value that is stored
    -Can change the address stored in the pointer as much as you like 
    -Using the pointer to change the value pointed is NOT ALLOWED, even after you have changed the address stored in the pointer
    */

    int count = 43;
    int* const pCount = &count; //defines a constant pointer: CANNOT change the address what the pointer points to
    int item = 34;
    //pCount = &item; //Error - Attempt to change the address of a constant pointer
    *pCount = 345; //OKAY - Changes the value of count with dereferencing, not the actual's pointing address

    //Creates a constant pointer that points to a value that is also constant
    int item2 = 7890;
    const int* const pItem = &item2; 
    //Could still change the value of item2 directly, so you could specify the item2 variable as constant as well
    //const int item2 = 7890;
       
    return 0;
}