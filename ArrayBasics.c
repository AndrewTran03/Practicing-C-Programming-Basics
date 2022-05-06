#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

int main(int argc, char* argv[]) {

    //Declaring an Array
    printf("\n1D Array Representation: \n");
    int grades[10];
    
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    for(i = 0; i < MONTHS; i++) {
        printf("days[%i] = %i\n", i, days[i]);
        
    }
    printf("\n");
    
    for(int j = 0; j < MONTHS; j++) {
        printf("Month %d has %2d days.\n", j + 1, days[j]);
    }
    printf("\n");
    

    int arrayValues[10] = {0, 1, 4, 9, 16};

    for(i = 5; i < 10; i++) {
        arrayValues[i] = i * i;
    }

    for(i = 0; i < 10; i++) {
        printf("arrayValues[%i] = %i\n", i, arrayValues[i]);
    }

    printf("\n2D Array Representation: \n");
    int matrix[4][5] =  {
                        {10, 5, -3}, 
                        {9, 0, 0}, 
                        {32, 20, 1}, 
                        {0, 0, 8}
                        };
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("\n3 or Higher Dimensional Array Representation: \n"); 
    int numbers[2][3][4] = {
                            { //First Block of 3 Rows
                            {10,20,30,40},
                            {15,25,35,45},
                            {17,27,37,47}
                            },
                            { //Second Block of 3 Rows
                            {50,70,90,110},
                            {55,75,95,115},
                            {57,77,97,117}
                            }
                            };

    int sum = 0;
    for(int n = 0; n < 2; n++) {
        for(int m = 0; m < 3; m++) {
            for(int l = 0; l < 4; l++) {
                printf("%d ", numbers[n][m][l]);
                sum += numbers[n][m][l];
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Sum of 3D Array: %i\n", sum);

    
    /*
    //Testing the Debugger
    char* p = NULL;
    printf("%s\n", p);
    */

    //Variable Length Arrays: Must be Integer-Typed Size
    int length = 10;
    float arr[length];

    return 0;
}