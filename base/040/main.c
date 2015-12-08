/*
 *函数指针
 */
#include <stdio.h>
#include <string.h>

void check(char *a, char *b, int(*cmp)(const char *, const char *));

int main(int argc, char * argv[])
{
    char s1[80];
    char s2[80];
    int (*p)(const char *, const char *);

    /*函数strcmp包含在<string.h>中*/
    p = strcmp;

    printf("输入两个字符串：\n");
    gets(s1);
    gets(s2);

    check(s1, s2, p);

    return 0;
}

void check(char *a, char *b, int(*cmp)(const char *, const char *))
{
    printf("测试是否相等\n");
    if (!(*cmp)(a, b)) {
        printf("结果：相等\n");
    } else {
        printf("结果：不相等\n");
    }
}
