#include <stdio.h>
int main() {
    float dollar;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollar);
    printf("Rupees: %f\n", dollar * 48);
    return 0;
}
