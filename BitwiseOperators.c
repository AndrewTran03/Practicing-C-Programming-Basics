#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    /* Bitwise Operators: 
    & = And: Copies a bit to the result if it exists in BOTH operands. 
    | = Or: Copies a bit to the result if it exists in EITHER operand.
    ^ = Xor: Copies a bit to the result if it exists in ONE operand but NOT BOTH.
    ~ = One's Complement: 'Flipping' Bits
    << = Left-Shift: Left Operands Value is moved LEFT by the number of bits specified by the right operand.
    >> = Right-Shift: Left Operands Value is moved RIGHT by the number of bits specified by the right operand.
    */
    unsigned int a = 60; //Binary Representation: 0011 1100
    unsigned int b = 15; //Binary Representation: 0000 1111
    int result = 0;

    result = (a & b); // 0000 1100 = 12
    printf("a & b: %d\n", result);

    result = (a | b); // 0011 1111 = 63
    printf("a | b: %d\n", result);

    result = (a ^ b); // 0011 0011 = 51
    printf("a ^ b: %d\n", result);

    result = (~a); // 1100 0011 = -61
    printf("~a: %d\n", result);

    result = ~(~a); // 0011 1100 = 60;
    printf("~(~a): %d\n", result);

    result = a << 2; // 1111 0000 = 240
    printf("a << 2: %d\n", result);

    /*
    //Testing the Debugger
    char* p = NULL;
    printf("%s\n", p);
    */

    result = a >> 2; // 0000 1111 = 15
    printf("a >> 2: %d\n", result);
    
    return 0;
}