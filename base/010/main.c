/*
 *else-if语句
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int x, y;
    printf("请输入一个整数：");
    scanf("%d", &x);
    if (x < 6) {
        y = x - 12;
    } else if (x < 15) {
        y = 3*x - 1;
    } else {
        y = 5*x + 9;
    }
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
