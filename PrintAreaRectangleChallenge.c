#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    //double width = 32.30;
    //double height = 15.30;
    
    double width = atoi(argv[1]); //atoi() converts strings to integers
    double height = atoi(argv[2]);

    double perimeter;
    perimeter = 2 * (width + height);
    printf("Perimeter of Rectangle: %.2f\n", perimeter);

    double area;
    area = width * height;
    printf("Area of Rectangle: %.2f\n", area);

    printf("Width is: %.2f, Height is: %.2f, Perimeter is: %.2f, Area is: %.2f\n", width, height, perimeter, area);

    return 0;
}