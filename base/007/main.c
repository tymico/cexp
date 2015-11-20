/*
 *字符译码
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    char c1, c2, c3, c4, c5, c6, c7;
    c1 = 'C';
    c2 = 'h';
    c3 = 'i';
    c4 = 'n';
    c5 = 'e';
    c6 = 's';
    c7 = 'e';
    printf("源码是：%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7);

    c1 = c1 + 6;
    c2 = c2 + 6;
    c3 = c3 + 6;
    c4 = c4 + 6;
    c5 = c5 + 6;
    c6 = c6 + 6;
    c7 = c7 + 6;
    printf("源码是：%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7);

    return 0;
}
