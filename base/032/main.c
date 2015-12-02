/*
 *变量存储类别
 */
#include <stdio.h>

int sum_day(int month, int day);
int leap(int year);

int main(int argc, char * argv[])
{
    int year, month, day;
    int  days;
    printf("please input date(year, month, day):\n");
    scanf("%d %d %d", &year, &month, &day);
    days = sum_day(month, day);
    if (leap(year) && month > 2) {
        days = days + 1;
    }
    printf("is the %dth day of this year.\n", days);
    return 0;
}

static int day_tab[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int sum_day(int month, int day)
{
    int i;
    for (i = 0; i < month; ++i) {
        day = day + day_tab[i];
    }
    return day;
}

int leap(int year)
{
    int leap;
    leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    return leap;
}
