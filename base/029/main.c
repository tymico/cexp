/*
 *函数的嵌套调用
 * 计算x³-8x²+12x-30=0的解
 */
#include <stdio.h>
#include <math.h>

#define F (0.0001)

/*计算x³-8x²+12x-30=0*/
float f(float x);
/*计算弦与x轴的交点横坐标*/
float xpoint(float x1, float x2);
/*求解区间x1与x2的实根*/
float root(float x1, float x2);

int main(int argc, char * argv[])
{
    float x1, x2, f1, f2, x;
    do {
        printf("please input x1, x2: \n");
        scanf("%f %f", &x1, &x2);
        f1 = f(x1);
        f2 = f(x2);
    } while (f1*f2 > 0);
    x = root(x1, x2);
    printf("A root of equation is %9.6f\n", x);
    return 0;
}

float f(float x)
{
    float y;
    y = x * (x * (x - 8) + 12) - 30;
    return y;
}

float xpoint(float x1, float x2)
{
    int x;
    x = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
    return x;
}

float root(float x1, float x2)
{
    int x, y, y1;
    y1 = f(x1);
    do {
        x = xpoint(x1, x2);
        y = f(x);
        if (y*y1 > 0) {
            y1 = y;
            x1 = x;
        } else {
            x2 = x;
        }
    } while (fabs(y) >= F);
    return x;
}

