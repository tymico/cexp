#include <stdio.h>

int main(int argc, char * argv[])
{
    int i, j, k;
    int m, n, p;

    i = 8;
    j = 10;
    k = 12;

    m = ++i;
    printf("i = %d, m = %d\n", i, m);

    n = j--;
    printf("j = %d, n = %d\n", j, n);

    p = (++m)*(n++)+(--k);
    printf("k = %d, p = %d\n", k, p);

    return 0;
}
