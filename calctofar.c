#include <stdio.h>
int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Fahrenheit: %f\n", (9.0 / 5.0) * celsius + 32);
    return 0;
}
