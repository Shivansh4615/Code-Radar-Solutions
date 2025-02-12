#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    if (! (num > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
