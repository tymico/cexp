/*
 *do-while语句
 */
#include <math.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    /*sin(x) = x - 3*x/3! + 5*x/5! - 7*x/7!+...*/
    double s, t, x;
    int n;
    printf("please input an integer:");
    scanf("%lf", &x);
    n = 1;
    t = x;
    s = x;
    do {
        n = n + 2;
        t = t * (-x*x) / ((float)(n) - 1) / (float)(n);
        s = s + t;
    } while(fabs(t) >= 1e-8);

    printf("sin(%lf) = %lf\n", x, s);

    return 0;
}
