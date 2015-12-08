/*
 *变量的指针
 */
#include <stdio.h>

void swap(int * p1, int * p2);
void exchange(int * p1, int * p2, int * p3);

int main(int argc, char * argv[])
{
    int x, y, z, *p1, *p2, *p3;
    printf("please input 3 integers: ");
    scanf("%d %d %d", &x, &y, &z);
    p1 = &x;
    p2 = &y;
    p3 = &z;
    exchange(p1, p2, p3);
    printf("after order: %d %d %d\n", x, y, z);
    return 0;
}

void swap(int * p1, int * p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void exchange(int * p1, int * p2, int * p3)
{
    if (*p1 < *p2) {
        swap(p1, p2);
    }
    if (*p1 < *p3) {
        swap(p1, p3);
    }
    if (*p2 < *p3) {
        swap(p2, p3);
    }
}
