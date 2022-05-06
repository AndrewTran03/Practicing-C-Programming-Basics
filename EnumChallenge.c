#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    enum Company { Google, Facebook, Xerox=15, Apple, Microsoft, EBay, Yahoo};
    enum Company xerox = Xerox;
    enum Company google = Google;
    enum Company ebay = EBay; 

    printf("The value of xerox is %d\n", xerox);
    printf("The value of google is %d\n", google);
    printf("The value of ebay is %d\n", ebay);
    return 0;
}