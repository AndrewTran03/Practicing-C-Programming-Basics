#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    
    //Arithmetic Operators in C
    int a = 15;
    int b = 33;
    int result = 0;

    result = a + b;
    printf("Addition Operation: %i\n", result);

    result = a - b;
    printf("Subtraction Operation: %i\n", result);

    result = a * b;
    printf("Multiplication Operation: %i\n", result);

    result = b / a;
    printf("Integer Division Operation: %i\n", result);

    double convertA = (float)(a);
    double convertB = (float)(b);
    double doubleResult;
    doubleResult = convertB / convertA;
    printf("Regular Divsion Operation: %f\n", result);

    result = b % a;
    printf("Modulus Operation: %i\n", result);

    a++;
    result = a;
    printf("Short-Hand Addition Operation: %i\n", result);

    result = a;
    printf("Current State of 'a': %i\n", result);

    b--;
    result = b;
    printf("Short-Hand Addition Operation: %i\n", result);

    result = b;
    printf("Current State of 'b': %i\n", result);

    //Logical Operators in C
    bool first = true;
    bool second = true;
    bool c = false;
    bool d = false;

    result = (first && second);
    printf("a && b: %d\n", result); // true or 1

    result = (first && c);
    printf("a && c: %d\n", result); // false or 0

    result = (c && d);
    printf("c && d: %d\n", result); // false or 0

    result = (first || second);
    printf("first || second: %d\n", result); // true or 1

    result = (first || c);
    printf("first || c: %d\n", result); // true or 1

    result = (c || d);
    printf("c || d: %d\n", result); // false or 0

    result = !first;
    printf("!first: %d\n", result); // false or 0

    result = !d;
    printf("!d: %d\n", result); // true or 1

    // (Short-Hand) Assignment Operators: +=, -=, *=, /=, %=
    // Relational Operators: ==, !=, <, <=, >, >= 
    return 0;
}