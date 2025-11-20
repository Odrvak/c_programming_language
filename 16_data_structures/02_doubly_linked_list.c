#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node* create_node(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
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
    new_node->prev = temp;
}

void print_forward(Node *head) {
    printf("Forward: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void print_backward(Node *head) {
    if (head == NULL) return;
    while (head->next != NULL) {
        head = head->next;
    }
    printf("Backward: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->prev;
    }
    printf("\n");
}

int main(void) {
    Node *head = NULL;

    insert_at_end(&head, 10);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);

    print_forward(head);
    print_backward(head);

    return 0;
}
