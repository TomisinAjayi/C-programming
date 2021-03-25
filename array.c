#include<stdio.h>
#include<string.h>

int main() {
    /*float a = 20.0;
    float b = 30.0;

    float sum = a+b;

    float product = a*b;

    float division = b/a;

    printf("The sum of two numbers is %f\n", sum);
    printf("The product of two numbers is %f\n", product);
    printf("The division of two numbers is %f\n", division);*/

    //one dimension
    /*int tomi[6];
    tomi[0] = 10;
    tomi[1] = 2;
    tomi[2] = 3;
    tomi[3] = 4;
    tomi[4] = 5;
    tomi[5] = tomi[0] * tomi[1] * tomi[2] * tomi[3] * tomi[4];
    printf("The product of five numbers is %d", tomi[5]);*/

    //multi-dimension
    /*int tomi[2][3];
    tomi[0][0] = 20;
    tomi[0][1] = 30;
    tomi[0][2] = 40;
    tomi[1][0] = 50;
    tomi[1][1] = 60;
    tomi[1][2] = 70;

    printf("The sum of ")*/

    //average
    /*float average;
    float num[4];
    float sum;

    printf("Calculate the average of five numbers.\n");

    for(int i = 0; i < 5; i++) {
        printf("Enter Number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    float avg = sum / 5;
    printf("Average is %f", avg);*/

    //average of any number from 1 - 100
    /*int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while(n > 100 || n < 1) {
        printf("ERROR! number should be  from 1-100.\n");
        printf("Enter another number! ");
        scanf("%d", &n);
    }

    for(i = 0; i<n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("Average = %.2f", avg);*/

    /*int tomi[5];
    tomi[0] = 10;
    tomi[1] = 20;
    tomi[2] = 30;
    tomi[3] = 40;
    tomi[4] = 50;

    for(int num = 0; num < 5; num++) {
        printf("Tomi is %d\n", num[tomi]);
    }*/

    /*char name[7] = "tomisin";
    for(int i = 0; i < 7; i++) {
        printf("%c", name[i]);
    }*/

    char somename = 'A';
    char letter[1];

    printf("Enter any letter (A-Z): ");
    scanf("%c", &letter);

    if((strcmp(somename, letter)) == 0) {
        printf("You just typed letter A");
    } else {
        printf("You didn't type my letter");
    }


    return 0;
}
