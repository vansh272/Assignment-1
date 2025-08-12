#include <stdio.h>
int main() {
    float grams;
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    printf("Kilograms: %f\n", grams / 1000);
    return 0;
}
