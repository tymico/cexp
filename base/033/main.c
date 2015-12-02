/*
 *内部和外部函数
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    extern int multiply();
    extern int sum();
    int a, b;
    int result;
    printf("Please input a and b: ");
    scanf("%d %d", &a, &b);
    result = multiply(a, b);
    printf("The result of multiply is %d.\n", result);
    result = sum(a, b);
    printf("The result of sum is %d.\n", result);
    return 0;
}
