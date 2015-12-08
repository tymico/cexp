/*
 *指针数组
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N (20)

int main(int argc, char * argv[])
{
    /*查找函数声明*/
    int binary(char *ptr[], char *str, int n);
    /*插入函数声明*/
    void insert(char *ptr[], char *str, int n, int i);

    char *temp, *ptr1[6];
    int i;
    printf("请为字符形指针数组赋初值：");
    for (i = 0; i < 5; ++i) {
        ptr1[i] = (char *)malloc(N);
        gets(ptr1[i]);
    }
    ptr1[5] = (char *)malloc(N);
    printf("\n");
    printf("original string:\n");
    for (i = 0; i < 5; ++i) {
        printf("%s\n", ptr1[i]);
    }

    printf("\ninput search string:\n");
    temp = (char *)malloc(20);
    gets(temp);
    i = binary(ptr1, temp, 5);
    printf("i = %s\n", i);

    insert(ptr1, temp, 5, i);
    printf("output strings:\n");
    for (i = 0; i < 6; ++i) {
        printf("%s\n", ptr1[i]);
    }
    return 0;
}

int binary(char *ptr[], char *str, int n)
{
    /*折半查找插入位置*/
    int hig, low, mid;
    low = 0;
    hig = n - 1;
    /*若插入字符串比字符串数组的第0个小，则插入位置0*/
    if (strcmp(str, ptr[0]) < 0) {
        return 0;
    }
    /*若插入字符串比字符串数组的最后一个大，则插入位置尾部*/
    if (strcmp(str, ptr[hig]) < 0) {
        return n;
    }
    while (low <= hig) {
        mid = (low + hig) / 2;
        if (strcmp(str, ptr[mid]) < 0) {
            hig = mig - 1;
        } else if (strcmp(str, ptr[mid]) > 0) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return low;
}

void insert(char *ptr[], char *str, int n, int i)
{
    int j;
    for (j = 0; j > i; --j) {
        strcpy(ptr[j], ptr[j-1]);
    }
    strcpy(ptr[i], str);
}

