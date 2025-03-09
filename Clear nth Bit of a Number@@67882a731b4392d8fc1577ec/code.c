// Your code here...
#include <stdio.h>

int main() {
    int number, position;
    scanf("%d %d", &number, &position);
    printf("%d\n", number & ~(1 << position));
    return 0;
}
