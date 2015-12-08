/*
 *综合运用
 */
#include <stdio.h>

void head1();
void head2();
void head3();

int count;

int main(int argc, char * argv[])
{
    register int index;
    head1();
    head2();
    head3();
    for (index = 8; index > 0; --index) {
        int stuff;
        for (stuff = 0; stuff < 7; ++stuff) {
            printf("%2d", stuff);
        }
        printf("index is now %d\n", index);
    }
    return 0;
}

int counter;

void head1()
{
    int index;
    index = 23;
    printf("The head1 value is %d\n", index);
}

void head2()
{
    int count;
    count = 53;
    printf("The head2 value is %d\n", count);
    counter = 77;
}

void head3()
{
    printf("The head3 value is %d\n", counter);
}
