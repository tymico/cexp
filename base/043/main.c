/*
 *指针的初始化
 */
#include <stdio.h>
#include <string.h>

int search(char *p[], char *name);

char *names[] = {
    "Herb",
    "Rex",
    "Dennis",
    "John",
    NULL
};

int main(int argc, char *argv[])
{
    if (search(names, "Herb") != -1) {
        printf("Herb is in list.\n");
    } else {
        printf("Herb is not in list.\n");
    }
    if (search(names, "Mary") == -1) {
        printf("Mary is not in list.\n");
    } else {
        printf("Mary is in list.\n");
    }
    return 0;
}

int search(char *p[], char *name)
{
    int i;
    for (i = 0; p[i] != NULL; ++i) {
        if (strcmp(p[i], name) == 0) {
            return i;
        }
    }
    return -1;
}

