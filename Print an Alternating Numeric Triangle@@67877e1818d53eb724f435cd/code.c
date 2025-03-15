// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, start;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        start = i % 2 == 0 ? 0 : 1;  
        for (j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start;  
        }
        printf("\n");
    }

    return 0;
}
