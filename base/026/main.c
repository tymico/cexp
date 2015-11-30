/*
 *数组函数的调用
 */
#include <stdio.h>

#define N (3)

/*转置函数*/
void convert(int [N][N]);

int main(int argc, char * argv[])
{
    int array[N][N];
    int i, j;
    printf("请输入数组元素：\n");
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n当前数组是：\n");
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }
    convert(array);
    printf("\n转置数组是：\n");
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void convert(int array[N][N])
{
    int i, j, t;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < i; ++j) {
            if (i != j) {
                t = array[i][j];
                array[i][j] = array[j][i];
                array[j][i] = t;
            }
        }
    }
}

