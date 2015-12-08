/*
 *一维指针数组
 */
#include <stdio.h>

#define N (10)

/*反序数组*/
void inv(int *x, int n);

int main(int argc, char * argv[])
{
    int i;
    int array[N] = {1, 3, 9, 11, 0, 8, 5, 6, 14, 98};
    printf("origin array: ");
    for (i = 0; i < N; ++i) {
        printf("%4d", array[i]);
    }
    printf("\n");
    inv(array, N);
    printf("invert array: ");
    for (i = 0; i < N; ++i) {
        printf("%4d", array[i]);
    }
    printf("\n");
}

void inv(int *x, int n)
{
    /*
     *int i, t;
     *for (i = 0; i < n/2; ++i) {
     *    t = x[i];
     *    x[i] = x[n-i-1];
     *    x[n-i-1] = t;
     *}
     */
    int *p, *i, *j;
    int t;
    int m = (n-1) / 2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; ++i, --j) {
        t = *i;
        *i = *j;
        *j = t;
    }
}
