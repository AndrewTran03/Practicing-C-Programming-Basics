#include <stdio.h>
#include <stdlib.h>

//Struct Declarations
struct item
{
    char *itemName;
    int qty;
    float price;
    float amount;
};

//Function Declarations
void readItem(struct item *i);
void printItem(struct item *i);

int main()
{
    struct item item;
    struct item *pItem;

    pItem = &item;

    pItem->itemName = (char*)malloc(30 * sizeof(char));

    if(pItem == NULL)
        exit(-1);

    // read item
    readItem(pItem);

    // print item
    printItem(pItem);

    free(pItem->itemName);

    return 0;
}

void readItem(struct item *i)
{
    //Get User Input for Item Details
    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("\nEnter price: ");
    scanf("%f", &i->price);

    printf("\nEnter quantity: ");
    scanf("%d", &i->qty);

    i->amount = (float)i->qty * i->price;
}

void printItem(struct item *i)
{
    //Print Item Details
	printf("\n--------PROCESSING--------");
    printf("\nName: %s",i->itemName);
	printf("\nPrice: %.2f",i->price);
	printf("\nQuantity: %d",i->qty);
	printf("\nTotal Amount: %.2f\n",i->amount);
}