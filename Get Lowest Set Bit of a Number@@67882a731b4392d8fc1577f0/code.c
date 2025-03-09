// Your code here...
#include <stdio.h>

int f(int n) {
    if (n == 0)
        return -1;

    int position = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", f(num));
    return 0;
}
