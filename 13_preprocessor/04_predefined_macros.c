#include <stdio.h>

int main(void) {
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);

    #ifdef __STDC__
    printf("Standard C: Yes\n");
    #endif

    #ifdef __STDC_VERSION__
    printf("C Standard Version: %ld\n", __STDC_VERSION__);
    #endif

    printf("Function: %s\n", __func__);

    return 0;
}
