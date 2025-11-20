#include <stdio.h>

struct Point {
    int x;
    int y;
};

void print_point(struct Point *p);
void move_point(struct Point *p, int dx, int dy);

int main(void) {
    struct Point p1 = {10, 20};
    struct Point *ptr = &p1;

    printf("Using dot operator: (%d, %d)\n", p1.x, p1.y);
    printf("Using arrow operator: (%d, %d)\n", ptr->x, ptr->y);
    printf("Using pointer dereference: (%d, %d)\n", (*ptr).x, (*ptr).y);

    print_point(&p1);

    move_point(&p1, 5, -3);
    printf("After move: ");
    print_point(&p1);

    return 0;
}

void print_point(struct Point *p) {
    printf("Point: (%d, %d)\n", p->x, p->y);
}

void move_point(struct Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}
