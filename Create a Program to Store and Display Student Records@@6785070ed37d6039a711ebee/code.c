// Your code here...
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[100];
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %d\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
    
    return 0;
}
