#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int minutesEntered;
    double years;
    double days;
    double minutesInYear;

    printf("Please enter the number of minutes: ");
    //Get input from user
    scanf("\n%d", &minutesEntered);

    printf("Minutes Entered: %d", minutesEntered);
    minutesInYear = (60 * 24 * 365);
    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / 60.0) / 24.0;
    printf("%d minutes is approximately %.4f days and %.4f years\n", minutesEntered, days, years);
    return 0;
}