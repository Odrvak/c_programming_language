#include <stdio.h>

int binary_search(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int binary_search_recursive(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            return binary_search_recursive(arr, mid + 1, right, target);
        }

        return binary_search_recursive(arr, left, mid - 1, target);
    }
    return -1;
}

int main(void) {
    int arr[] = {2, 3, 4, 10, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binary_search(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element %d found at index %d (iterative)\n", target, result);
    } else {
        printf("Element %d not found (iterative)\n", target);
    }

    result = binary_search_recursive(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element %d found at index %d (recursive)\n", target, result);
    } else {
        printf("Element %d not found (recursive)\n", target);
    }

    return 0;
}
