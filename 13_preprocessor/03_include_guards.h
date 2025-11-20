#ifndef EXAMPLE_H
#define EXAMPLE_H

#define BUFFER_SIZE 256

typedef struct {
    int x;
    int y;
} Point;

void print_point(Point p);
int calculate_distance(Point p1, Point p2);

#endif
