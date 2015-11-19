#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    /*换行符'\n'*/
    printf("How are you?\n");
    printf("I am fine.\n\n");

    /*横向跳格符'\t'*/
    printf("How are you?\t");
    printf("I am fine.\n\n");

    /*退格符'\b'*/
    printf("  How are you?\n");
    printf("  \bI am fine.\n\n");

    /*回车符'\r'*/
    printf("                I am fine.");
    printf("\rHow are you?\n\n");

    /*综合使用*/
    printf("note:\n a s\ti\b\bk\rp\n");

    return 0;
}

