// Your code here...
#include <stdio.h>

int (int n) {
    if (n == 0)
        return 32;

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1)
            break;
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n",(num));
    return 0;
}
