/*
 *普通位运算
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    unsigned char result;
    int a, b, c, d;
    a = 2;
    b = 4;
    c = 6;
    d = 8;

    result = a & c;
    printf("result = %d\n", result);
    result = b | d;
    printf("result = %d\n", result);
    result = a ^ d;
    printf("result = %d\n", result);
    result = ~a;
    printf("result = %d\n", result);

    return 0;
}

