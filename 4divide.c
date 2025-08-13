#include <stdio.h>
int main() {
    int a, b;
    printf("Enter dividend: ");
    scanf("%d", &a);
    printf("Enter divisor: ");
    scanf("%d", &b);
    if (b != 0)
        printf("our answer is %d\n", a / b);
    else
        printf("Division by zero error\n");
    return 0;
}
