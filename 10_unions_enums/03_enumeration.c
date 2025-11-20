#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

enum Color {
    RED = 1,
    GREEN = 2,
    BLUE = 4,
    YELLOW = 8
};

int main(void) {
    enum Day today = WEDNESDAY;

    printf("Today is day number: %d\n", today);

    if (today == WEDNESDAY) {
        printf("It's Wednesday!\n");
    }

    enum Color favorite = BLUE;
    printf("\nFavorite color value: %d\n", favorite);

    printf("\nAll days:\n");
    for (enum Day d = MONDAY; d <= SUNDAY; d++) {
        printf("Day %d\n", d);
    }

    return 0;
}
