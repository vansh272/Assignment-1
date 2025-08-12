#include <stdio.h>
int main() {
    float rupee;
    printf("Enter amount in rupees: ");
    scanf("%f", &rupee);
    printf("Dollars: %.2f\n", rupee / 87.59);
    return 0;
}
