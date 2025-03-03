#include <stdio.h>

// Structure to store student details
struct Student {
    char name[50];
    int AdmissionNo;
    float marks[5];
};

int main() {
    struct Student s;
    float total = 0, percentage;
    char *subjects[] = {"Maths", "English", "Kiswahili", "Science", "History"};

    // Get student details
    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);
    
    printf("Enter Admission No: ");
    scanf("%d", &s.AdmissionNo);

    // Get marks for the 5 subjects
    printf("Enter marks for the following subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: ", subjects[i]);
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Display the report card
    printf("\n==============================\n");
    printf("   Dakabaricha Secondary School\n");
    printf("         REPORT CARD          \n");
    printf("==============================\n");
    printf("Name: %s\n", s.name);
    printf("Admission No: %d\n", s.AdmissionNo);
    printf("------------------------------\n");
    printf("Subject         Marks (out of 100)\n");
    printf("------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-15s %.2f\n", subjects[i], s.marks[i]);
    }

    printf("------------------------------\n");
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // Assign Grade
    printf("Grade: ");
    if (percentage >= 90) printf("A+\n");
    else if (percentage >= 80) printf("A\n");
    else if (percentage >= 70) printf("B\n");
    else if (percentage >= 60) printf("C\n");
    else if (percentage >= 50) printf("D\n");
    else printf("F (Fail)\n");

    printf("==============================\n");

    return 0;
}
