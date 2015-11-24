/*
 *函数的引用调用
 */
#include <stdio.h>

void swap(int *, int *);

int main(int argc, char * argv[])
{
    int i, j;
    i = 12;
    j = 36;
    printf("i and j before swapping: %d %d\n", i, j);
    swap(&i, &j);
    printf("i and j after swapping: %d %d\n", i, j);
    return 0;
}

void swap(int * x, int * y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

