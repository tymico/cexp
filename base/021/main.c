/*
 *字符数组
 */
#include <stdio.h>

#define MAX 100
#define LEN 80

int main(int argc, char * argv[])
{
    char text[MAX][LEN];
    /*定义三个寄存器变量*/
    register int t, i, j;

    for (t = 0; t < MAX; ++t) {
        printf("%d: ", t);
        gets(text[t]);
        /*空行跳出*/
        if (!text[t][0]) {
            break;
        }
    }

    for (i = 0; i < t; ++i) {
        for (j = 0; text[i][j]; ++j) {
            putchar(text[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
