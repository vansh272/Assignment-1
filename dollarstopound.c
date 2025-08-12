#include <stdio.h>
int main() {
    float dollar;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollar);
    printf("Pounds: %.2f\n", (dollar * 48) / 70);
    return 0;
}
