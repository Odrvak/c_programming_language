#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEST_PASS "\033[32mPASS\033[0m"
#define TEST_FAIL "\033[31mFAIL\033[0m"

typedef struct {
    const char *name;
    int (*test_func)(void);
} Test;

int total_tests = 0;
int passed_tests = 0;
int failed_tests = 0;

void run_test(Test test) {
    printf("Running: %s ... ", test.name);
    int result = test.test_func();

    if (result == 0) {
        printf("%s\n", TEST_PASS);
        passed_tests++;
    } else {
        printf("%s\n", TEST_FAIL);
        failed_tests++;
    }
    total_tests++;
}

int test_addition(void) {
    int result = 2 + 2;
    return (result == 4) ? 0 : 1;
}

int test_string_length(void) {
    const char *str = "Hello";
    return (strlen(str) == 5) ? 0 : 1;
}

int test_array_access(void) {
    int arr[] = {1, 2, 3, 4, 5};
    return (arr[2] == 3) ? 0 : 1;
}

void print_summary(void) {
    printf("\n==========================================\n");
    printf("Test Summary:\n");
    printf("Total Tests: %d\n", total_tests);
    printf("Passed: %d\n", passed_tests);
    printf("Failed: %d\n", failed_tests);
    printf("Success Rate: %.2f%%\n", (float)passed_tests / total_tests * 100);
    printf("==========================================\n");
}

int main(void) {
    Test tests[] = {
        {"Addition Test", test_addition},
        {"String Length Test", test_string_length},
        {"Array Access Test", test_array_access}
    };

    int num_tests = sizeof(tests) / sizeof(tests[0]);

    printf("\n========== Running Test Suite ==========\n\n");

    for (int i = 0; i < num_tests; i++) {
        run_test(tests[i]);
    }

    print_summary();

    return (failed_tests == 0) ? 0 : 1;
}
