#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join_date;
    float salary;
};

int main(void) {
    struct Employee emp = {
        "John Smith",
        1001,
        {15, 6, 2020},
        50000.0f
    };

    printf("Employee Information:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Join Date: %02d/%02d/%d\n", emp.join_date.day, emp.join_date.month, emp.join_date.year);
    printf("Salary: $%.2f\n", emp.salary);

    return 0;
}
