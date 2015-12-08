/*
 *二维数组
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a[10], b[3][4];
    int *p1, *p2, **p3;
    int i, j;

    printf("请输入一维数组（10个元素）：\n");
    for (i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    printf("请输入二维数组（三行四列）：\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (p1 = a, p3 = &p1, i = 0; i < 10; ++i) {
        printf("%4d", *(*p3 + i));
    }
    printf("\n");

    for (i = 0; i < 3; ++i) {
        p2 = b[i];
        p3 = &p2;
        for (j = 0; j < 4; ++j) {
            printf("%d", *(*p3 + j));
        }
        printf("\n");
    }

    for (i = 0; i < 3; ++i) {
        p2 = b[i];
        for (p2 = b[i]; p2 - b[i] < 4; ++p2) {
            p3 = &p2;
            printf("%4d", **p3);
        }
        printf("\n");
    }

    return 0;
}
