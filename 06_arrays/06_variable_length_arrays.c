#include <stdio.h>

void process_array(int n, int arr[n]);

int main(void) {
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    process_array(size, arr);

    return 0;
}

void process_array(int n, int arr[n]) {
    printf("\nProcessing array of size %d\n", n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
}
