/*
 *局部与全局变量
 */
#include <stdio.h>

int count;
void func1();
void func2();

int main(int argc, char * argv[])
{
    count = 100;
    func1();
    return 0;
}

void func1()
{
    int t;
    t = count;
    func2();
    printf("    count is %d\n", count);
    func2();
}

void func2()
{
    int count;
    for(count = 1; count < 20; ++count) {
        printf(".");
    }
    printf("\n");
}
