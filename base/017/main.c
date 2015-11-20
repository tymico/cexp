/*
 *exit()函数
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int month, day;
    
    printf("please input the month number: ");
    scanf("%d", &month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        case 2:
            day = 28;
            break;
        default:
            printf("month is invalid.\n");
            exit(0);
    }
    printf("2015.%d has %d days.\n", month, day);

    return 0;
}
