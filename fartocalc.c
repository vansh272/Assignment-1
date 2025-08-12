#include <stdio.h>
int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Celsius: %f\n", (5.0 / 9.0) * (fahrenheit - 32));
    return 0;
}
