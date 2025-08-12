#include <stdio.h>
int main() {
    float side;
    printf("Enter side length of square: ");
    scanf("%f", &side);
    printf("Area: %f\n", side * side);
    printf("Perimeter: %f\n", 4 * side);
    return 0;
}
