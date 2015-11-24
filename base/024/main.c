/*
 *函数的值调用
 */
#include <stdio.h>

int square(int);
int cube(int);

int main(int argc, char * argv[])
{
    int m = 12;
    int n = 4;
    printf("%d的平方是%d\n", m, square(m));
    printf("%d的立方是%d\n", n, cube(n));

    return 0;
}

int square(int x)
{
    return x*x;
}

int cube(int x)
{
    return x*x*x;
}

