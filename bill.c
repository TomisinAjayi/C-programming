#include<stdio.h>

struct details{
    int productcode[5];
    int price[5];
    int sum;
};
int main() {

    struct details products;
    products.sum = 0;
    puts("A billing system.");
    for(int i = 0; i < 5; i++) {
        printf("Enter Product code: ");
        scanf("%d", &products.productcode[i]);
        printf("Enter Price: ");
        scanf("%d", &products.price[i]);
    }
    printf("Product Code \t\t Price\n");
    for(int j = 0 ; j < 5; j++) {
        printf("%d\t\t\t%d\n", products.productcode[j], products.price[j]);
        products.sum += products.price[j];
    }

    printf("The total price of the products is %d", products.sum);
    return 0;
}
