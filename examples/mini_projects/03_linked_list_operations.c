#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* create_node(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insert_at_beginning(Node **head, int data) {
    Node *new_node = create_node(data);
    new_node->next = *head;
    *head = new_node;
}

void insert_at_end(Node **head, int data) {
    Node *new_node = create_node(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void delete_node(Node **head, int data) {
    Node *temp = *head;
    Node *prev = NULL;

    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void reverse_list(Node **head) {
    Node *prev = NULL;
    Node *current = *head;
    Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void print_list(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main(void) {
    Node *head = NULL;

    insert_at_end(&head, 10);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_beginning(&head, 5);

    printf("Original list: ");
    print_list(head);

    delete_node(&head, 20);
    printf("After deleting 20: ");
    print_list(head);

    reverse_list(&head);
    printf("Reversed list: ");
    print_list(head);

    return 0;
}
