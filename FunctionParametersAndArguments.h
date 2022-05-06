/* 
How to Define a Header File: 
#ifndef <Header File Declaration (Token)> - Give it a Name
#define <Same Token Name>

...Function Declarations (Include Semicolon At End - Actually a Statement)...

#endif
*/
#ifndef FUNCTION_PARAM_ARG_H
#define FUNCTION_PARAM_ARG_H

void multiplyTwoNumbers(float a, float b);

#endif