#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    enum DaysOfWeek {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum DaysOfWeek today = Tuesday;

    switch(today) {
        case(Sunday): {
            printf("Today in Sunday\n");
            break;
        }
        case(Monday): {
            printf("Today is Monday\n");
            break;
        }
        default: {
            printf("It is neither Sunday or Monday today\n");
            break;
        }   
    }

    float firstNum, secondNum;
    char operator;
    printf("Type in your expression: ");
    scanf("%f %c %f", &firstNum, &operator, &secondNum);

    switch(operator) {
        case('+'):
            printf("%.2f\n", (firstNum + secondNum));
            break;
        case('-'):
            printf("%.2f\n", (firstNum - secondNum));
            break;
        case('*'):
            printf("%.2f\n", (firstNum * secondNum));
            break;
        case('/'):
            if(secondNum == 0) {
                printf("Division by Zero is NOT ALLOWED\n");
                break;
            }
            else {
                printf("%.2f\n", (firstNum / secondNum));
                break;
            }
        default:
            printf("UNKNOWN OPERATOR!\n");
            break;
    }
    
    return 0;
}