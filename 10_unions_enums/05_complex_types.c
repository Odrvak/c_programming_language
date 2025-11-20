#include <stdio.h>

typedef struct Person {
    char name[50];
    int age;
    struct Address {
        char street[100];
        char city[50];
        int zipcode;
    } address;
} Person;

typedef union Value {
    int i;
    float f;
    double d;
} Value;

typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_DOUBLE
} ValueType;

typedef struct {
    ValueType type;
    Value value;
} TypedValue;

int main(void) {
    Person person = {
        "John Doe",
        30,
        {"123 Main St", "New York", 10001}
    };

    printf("Person: %s, %d years old\n", person.name, person.age);
    printf("Address: %s, %s %d\n", person.address.street, person.address.city, person.address.zipcode);

    TypedValue tv;
    tv.type = TYPE_INT;
    tv.value.i = 42;

    printf("\nTypedValue:\n");
    if (tv.type == TYPE_INT) {
        printf("Integer: %d\n", tv.value.i);
    }

    return 0;
}
