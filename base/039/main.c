/*
 *字符串指针
 */
#include <stdio.h>

int main(int argc, char * argc[])
{
    int i;
    char a[] = "I am a student.";
    char b[20];
    char *p1, *p2;

    p1 = a;
    p2 = b;
    for (; *p1 != '\0'; ++p1, ++p2) {
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("string a is: %s\n", p1);
    printf("string b is: ");
    for (i = 0; b[i] != '\0'; ++i) {
        printf("%c", b[i]);
    }
    printf("\n");

    return 0;
}
