/*
 *函数的返回值
 */
#include <stdio.h>

int find_sub(char *, char *);

int main(int argc, char *argv[])
{
    if (find_sub("C is fun", "is") != -1) {
        printf("Substring is found.\n");
    } else {
        printf("Substring is not found.\n");
    }
    return 0;
}

int find_sub(char * s1, char * s2)
{
    register int t;
    char *p1, *p2;
    for (t = 0; s1[t]; ++t) {
        p1 = &s1[t];
        p2 = s2;
        while (*p1 && *p2 && (*p1 == *p2)) {
            ++p1;
            ++p2;
        }
        if (!*p2) {
            return t;
        }
    }
    return -1;
}
