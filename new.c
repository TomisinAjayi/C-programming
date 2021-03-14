#include<stdio.h>

int main() {

    int n, r, a, b, i, m;
    int permute;

    printf("Calculate the permuation.\n");
    printf("Enter the number of ways to arrange from(n).");
    scanf("%d", &n);
    printf("Enter the number of ways in which order it is to be arranged(r).");
    scanf("%d", &r);

    for(a = 0; a < n; a++) {
        b *=n;
    }
    for(i = 0; i < r; i++) {
        m *= r;
    }

    permute = b / m;
    printf("The number of ways it can be arranged in is %d ways", permute);

    return 0;
}
