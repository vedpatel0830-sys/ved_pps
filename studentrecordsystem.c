#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
    char grade; 
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 1; 

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);  

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("Enter Grade: ");
        scanf(" %c", &s[i].grade);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Marks: %.2f\n", s[i].marks);
        printf("Grade: %c\n", s[i].grade);
    }

    return 0;
}
