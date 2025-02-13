// Your code here...
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;
    float total = 0.0, average;
    
    scanf("%d", &n);
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        total += students[i].marks;
    }
    
    average = total / n;
    printf("%.2f\n", average);
    
    return 0;
}
