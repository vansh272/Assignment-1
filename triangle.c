#include <stdio.h>
int main() {
    float height, base;
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Area: %.2f\n", (height * base) / 2);
    return 0;
}
