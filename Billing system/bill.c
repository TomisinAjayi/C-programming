#include<stdio.h>
#include<string.h>
#include<time.h>

struct bill{
    char name[50];
    char items[20];
    int totalItems;
    int itemPrice[20];
    int total;
};
void discount() {
    struct bill customer;
    printf("Items\t\t\tPrice");
    for(int j = 0; j < customer.totalItems; j++) {
        printf("%s\t\t\t%d\n", customer.items[j], customer.itemPrice[j]);
        customer.total += customer.itemPrice[j];
    }
    printf("Total\t\t\t%d", customer.total);
}
int main() {

    struct bill customer;
    printf("Customer Billing System.\n");
    printf("Enter Name: ");
    scanf("%s", &customer.name);
    printf("\nYou can only purchase up to 20 items.\n");
    printf("Buy 5 items or more, get 10%% off.\n");
    printf("Enter the total amount of items you want to purchase: ");
    scanf("%d", &customer.totalItems);

    while(customer.totalItems < 1 || customer.totalItems > 20) {
        printf("\nYou can only purchase 20 items.Try again\n");
        printf("Enter the total amount of items you want to purchase: ");
        scanf("%d", &customer.totalItems);
    }
    for(int i = 0; i < customer.totalItems; i++) {
        printf("%d. Enter Item: ", i+1);
        scanf("%s", &customer.items[i]);
        printf("Enter Price of item: ");
        scanf("%d", &customer.itemPrice[i]);
    }

    if(customer.totalItems > 5) {
        printf("You purchased 5 items or more, you get 10%% off.\n");
        discount();
        customer.total = (9 * customer.total) / 10;
        printf("Discounted Price\t\t\t%d", customer.total);
    } else {
        discount();
    }

    /* generating date and time
    time_t t;   // not a primitive datatype
    time(&t);

    printf("\nThis program has been written at (date and time): %s", ctime(&t));
    */
    return 0;
}
