#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

typedef struct Entry {
    char *key;
    int value;
    struct Entry *next;
} Entry;

typedef struct {
    Entry *buckets[TABLE_SIZE];
} HashTable;

unsigned int hash(const char *key) {
    unsigned int hash_value = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hash_value = hash_value * 31 + key[i];
    }
    return hash_value % TABLE_SIZE;
}

void init_table(HashTable *table) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        table->buckets[i] = NULL;
    }
}

void insert(HashTable *table, const char *key, int value) {
    unsigned int index = hash(key);
    Entry *new_entry = (Entry *)malloc(sizeof(Entry));
    new_entry->key = strdup(key);
    new_entry->value = value;
    new_entry->next = table->buckets[index];
    table->buckets[index] = new_entry;
}

int search(HashTable *table, const char *key) {
    unsigned int index = hash(key);
    Entry *entry = table->buckets[index];
    while (entry != NULL) {
        if (strcmp(entry->key, key) == 0) {
            return entry->value;
        }
        entry = entry->next;
    }
    return -1;
}

int main(void) {
    HashTable table;
    init_table(&table);

    insert(&table, "apple", 100);
    insert(&table, "banana", 200);
    insert(&table, "cherry", 300);

    printf("apple: %d\n", search(&table, "apple"));
    printf("banana: %d\n", search(&table, "banana"));
    printf("cherry: %d\n", search(&table, "cherry"));
    printf("grape: %d\n", search(&table, "grape"));

    return 0;
}
