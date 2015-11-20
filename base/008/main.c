/*
 *指针操作符
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int * p;
    int begin, end;

    begin = 10;
    p = &begin;
    end = *p;

    printf("begin = %d\n", begin);
    printf("end = %d\n", end);

    printf("p = %d\n", p);
    printf("*p = %d\n", *p);

    return 0;
}
