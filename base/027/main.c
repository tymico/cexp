/*
 *命令行变元
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*#include <ctype.h>*/

int main(int argc, char * argv[])
{
    int disp, count;
    if (argc < 2) {
        printf("You must enter the length of the count on the command line.Try again.\n");
        exit(0);
    }
    if (argc == 3 && (0 == strcmp(argv[2], "display"))) {
        disp = 1;
    } else {
        disp = 0;
    }
    for (count = atoi(argv[1]); count; --count) {
        if (disp) {
            printf("%d\n", count);
        }
    }
    putchar('\a');
    printf("Down\n");

    return 0;
}
