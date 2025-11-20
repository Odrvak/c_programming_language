#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define SWAP(a, b) do { typeof(a) temp = a; a = b; b = temp; } while(0)
#define PRINT_ARRAY(arr, size) \
    do { \
        for (int i = 0; i < size; i++) { \
            printf("%d ", arr[i]); \
        } \
        printf("\n"); \
    } while(0)

int main(void) {
    int x = -10;
    printf("ABS(%d) = %d\n", x, ABS(x));

    int a = 15, b = 20;
    printf("MIN(%d, %d) = %d\n", a, b, MIN(a, b));

    printf("Before swap: a=%d, b=%d\n", a, b);
    SWAP(a, b);
    printf("After swap: a=%d, b=%d\n", a, b);

    int arr[] = {1, 2, 3, 4, 5};
    printf("Array: ");
    PRINT_ARRAY(arr, 5);

    return 0;
}
