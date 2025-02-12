#include <stdio.h>

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("First number is greater than the second.\n");
    } else {
        printf("First number is not greater than the second.\n");
    }
    return 0;
}
