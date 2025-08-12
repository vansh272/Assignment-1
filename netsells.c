#include <stdio.h>
int main() {
    float gross;
    printf("Enter gross sales: ");
    scanf("%f", &gross);
    printf("Net sales: %f\n", gross - (gross * 0.10));
    return 0;
}
