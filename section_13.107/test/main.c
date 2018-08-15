#include <stdio.h>
#include <stdlib.h>

struct item {
    char * pitemName;
    int quantity;
    float price;
    float amount;
};

void readItem (struct item * pnewItem)
{
    printf("Enter product name: ");
    scanf("%s", pnewItem -> pitemName);

    printf("\nEnter quantity: ");
    scanf("%i", &(pnewItem -> quantity));

    printf("\nEnter price: ");
    scanf("%f", &(pnewItem -> price));
}

void printItem (struct item * pnewItem)
{
    printf("\n---------------");
    printf("\nProduct name: %s", pnewItem -> pitemName);

    printf("\nQuantity: %i", pnewItem -> quantity);

    printf("\nPrice: %.2f", pnewItem -> price);

    pnewItem->amount = (float) pnewItem->quantity * pnewItem->price;

    printf("\n Amount: %.2f", pnewItem->amount);
}

int main()
{
    struct item newItem;
    struct item * pnewItem = &newItem;

    pnewItem -> pitemName = (char *) calloc(30, sizeof(char));

    readItem(pnewItem);
    printItem(pnewItem);

    return 0;
}
