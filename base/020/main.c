/*
 *二维数组
 *魔方和
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int arr[16][16];
    int i, j, k, m, n;

    m = 1;
    while (m == 1) {
        printf("please input n(0<n<16), and n is odd number:");
        scanf("%d", &n);
        if (n > 0 && n < 16 && (n % 2 != 0)) {
            printf("matrix order is %d\n", n);
            m = 0;
        }
    }

    /*初始化*/
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            arr[i][j] = 0;
        }
    }

    /*建立魔方阵*/
    j = n/2 + 1;
    arr[1][j] = 1;
    for (k = 2; k <= n*n; ++k) {
        i = i - 1;
        j = j + 1;
        if ((i < 1) && (j > n)) {
            i = i + 2;
            j = j - 1;
        } else {
            if (i < 1) {
                i = n;
            }
            if (j > n) {
                j = 1;
            }
        }
        if (arr[i][j] == 0) {
            arr[i][j] = k;
        } else {
            i = i + 2;
            j = j - 1;
            arr[i][j] = k;
        }
    }

    /*显示魔方阵*/
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
