#include <stdio.h>

int main() {
    int num1, num2, num3;
    double average;
    printf("");
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3.0;
    printf("Average: %.2lf\n", average);
    return 0;
}
