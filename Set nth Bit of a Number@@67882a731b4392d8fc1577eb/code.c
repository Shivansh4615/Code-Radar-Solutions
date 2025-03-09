// Your code here...
#include <stdio.h>

int s(int num, int n) {
    return num | (1 << n);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    printf("%d\n", s(num, n));
    return 0;
}
