#include <stdio.h>
int main() {
    float kg;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    printf("Grams: %f\n", kg * 1000);
    return 0;
}
