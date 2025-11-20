#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50
#define SUCCESS 0
#define FAILURE 1

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
} Employee;

int calculate_total(int *numbers, int count) {
    if (numbers == NULL || count <= 0) {
        return 0;
    }

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += numbers[i];
    }

    return total;
}

void print_employee(const Employee *emp) {
    if (emp == NULL) {
        return;
    }

    printf("Name: %s\n", emp->name);
    printf("Age: %d\n", emp->age);
    printf("Salary: %.2f\n", emp->salary);
}

int main(void) {
    Employee employee = {
        .name = "John Doe",
        .age = 30,
        .salary = 50000.0f
    };

    print_employee(&employee);

    int numbers[] = {10, 20, 30, 40, 50};
    int count = sizeof(numbers) / sizeof(numbers[0]);
    int total = calculate_total(numbers, count);

    printf("\nTotal: %d\n", total);

    return SUCCESS;
}
