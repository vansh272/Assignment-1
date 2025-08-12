#include <stdio.h>
int main() {
    float gross;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    float allowance = gross * 0.10;
    float deduction = gross * 0.03;
    printf("Net salary: %f\n", gross + allowance - deduction);
    return 0;
}
