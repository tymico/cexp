/*
 *哥德巴赫猜想，即任一充分大的偶数，可以用两个素数之和表示。
 */
#include <math.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int i, j, n;
    int p, q, flagp, flagq;

    printf("please input a plus integer that is greater than 3: ");
    scanf("%d", &n);
    
    while ((n % 2 != 0) || (n < 4)) {
        printf("input data error. please input another: ");
        scanf("%d", &n);
    }

    p = 1;
    do {
        p = p + 1;
        q = n - p;
        flagp = 1;
        flagq = 1;
        j = floor(sqrt((double)(p)));
        for (i = 2; i <= j; ++i) {
            if (p % i == 0) {
                flagp = 0;
                break;
            }
        }
        j = floor(sqrt((double)(q)));
        i = 2;
        while (i <= j) {
            if (q % i == 0) {
                flagq = 0;
                break;
            }
            ++i;
        }
        if (q < 2) {
            printf("can not find two prime number which of sum equals %d\n", n);
            break;
        }
    } while (flagp * flagq == 0);
    printf("%d = %d + %d\n", n, p, q);

    return 0;
}
