// Your code here...
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, searchRoll;
    int found = 0;
    
    scanf("%d", &n);
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }
    
    scanf("%d", &searchRoll);
    
    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student not found\n");
    }
    
    return 0;
}
