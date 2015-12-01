/*
 *函数的递归调用
 * 将数字输出为字符
 */
#include <stdio.h>

void convert(int);

int main(int argc, char * argv[])
{
    int n;
    printf("input an integer:");
    scanf("%d", &n);
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    convert(n);
    putchar('\n');

    return 0;
}

void convert(int n)
{
    int t;
    if ((t = n/10) != 0) {
        convert(t);
    }
    putchar(n%10 + '0');
}
