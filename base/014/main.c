/*
 *while语句
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int x, y, n1, n2, t;
    printf("please input 2 integers:");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    x = n1;
    y = n2;
    while (x != 0) {
        t = y % x;
        y = x;
        x = t;
    }
    printf("greatest common divisor is %d\n", y);
    printf("least common multiple is %d\n", n1*n2/y);

    return 0;
}
