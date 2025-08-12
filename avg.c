#include <stdio.h>
int main() {
    int s1, s2, s3;
    printf("Enter marks of subject 1: ");
    scanf("%d", &s1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &s2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &s3);
    int total = s1 + s2 + s3;
    float avg = total / 3.0;
    printf("Total: %d\n", total);
    printf("Average: %f\n", avg);
    return 0;
}
