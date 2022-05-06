#include <stdlib.h>
#include <stdio.h>

//Defining Constants in the Program
#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main(int argc, char* argv[]) {

    //const int PAYRATE = 20;
    int hours;
    double grossPay, taxes, netPay;

    printf("Please enter the total number of hours you worked this week: ");
    scanf("%i", &hours);

    //Calculate the Gross Pay
    if (hours <= 40) {
        grossPay = hours * PAYRATE;
    }
    else {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

   //Calculate Taxes
    if (grossPay <= 300) {
       taxes = grossPay * TAXRATE_300;
    }
    else if(grossPay > 300 && grossPay <= 450) {
       taxes = 300 * TAXRATE_300;
       taxes += (grossPay - 300) * TAXRATE_150;
    }
    else if (grossPay > 450) {
       taxes = 300 * TAXRATE_300;
       taxes += 150 * TAXRATE_150;
       taxes += (grossPay - 450) * TAXRATE_REST;
    }

    //Calculate the Netpay
    netPay = grossPay - taxes;

    // Display Output
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
}