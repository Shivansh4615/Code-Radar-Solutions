// Your code here...
#include <stdio.h>

void p(int n) {
    int flag = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1)
            flag = 1;
        if (flag)
            printf("%d", (n >> i) & 1);
    }
    if (!flag)
        printf("0");
}

int main() {
    int num;
    scanf("%d", &num);
    p(num);
    printf("\n");
    return 0;
}
