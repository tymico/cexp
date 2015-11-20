/*
 *break和continue语句
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int radius;
    double area;

    for (radius = 1; radius <= 10; ++radius) {
        area = 3.1416 * radius * radius;
        if (area > 120) {
            break;
        }
        printf("square = %f\n", area);
    }
    printf("now radius is %d\n", radius-1);

    for (radius = 1; radius <= 10; ++radius) {
        area = 3.1416 * radius * radius;
        if (area < 120.0) {
            continue;
        }
        printf("square = %f\n", area);
    }
    printf("now radius is %d\n", radius-1);

    return 0;
}
