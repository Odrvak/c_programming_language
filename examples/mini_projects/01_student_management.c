#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    int id;
    char name[NAME_LENGTH];
    float grade;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

void add_student(void) {
    if (student_count >= MAX_STUDENTS) {
        printf("Database full!\n");
        return;
    }

    Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Grade: ");
    scanf("%f", &s.grade);

    students[student_count++] = s;
    printf("Student added successfully!\n");
}

void display_students(void) {
    if (student_count == 0) {
        printf("No students in database.\n");
        return;
    }

    printf("\n%-10s %-20s %-10s\n", "ID", "Name", "Grade");
    printf("----------------------------------------\n");
    for (int i = 0; i < student_count; i++) {
        printf("%-10d %-20s %-10.2f\n",
               students[i].id, students[i].name, students[i].grade);
    }
}

void search_student(void) {
    int id;
    printf("Enter student ID: ");
    scanf("%d", &id);

    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            printf("\nStudent Found:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Grade: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("Student not found.\n");
}

int main(void) {
    int choice;

    while (1) {
        printf("\n=== Student Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_student(); break;
            case 2: display_students(); break;
            case 3: search_student(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
