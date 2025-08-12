#include <stdio.h>
int main() {
    float p, r, n;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &n);
    printf("Interest: %f\n", (p * r * n) / 100);
    return 0;
}
