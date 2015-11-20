/*
 *switch语句
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int num;
    int indiv, ten, hundred, thousand;
    int ten_thousand, hundred_thousand, place;

    printf("please input an integer 0-999999: ");
    scanf("%d", &num);

    if (num > 99999) {
        place = 6;
    } else if (num > 9999) {
        place = 5;
    } else if (num > 999) {
        place = 4;
    } else if (num > 99) {
        place = 3;
    } else if (num > 9) {
        place = 2;
    } else {
        place = 1;
    }
    printf("place = %d\n", place);
    printf("digit: ");
    indiv = num % 10;
    ten = num / 10 % 10;
    hundred = num / 100 % 10;
    thousand = num / 1000 % 10;
    ten_thousand = num / 10000 % 10;
    hundred_thousand = num / 100000 % 10;
    switch (place) {
        case 1:
            printf("%d\n", indiv);
            printf("antitone: ");
            printf("%d\n", indiv);
            break;
        case 2:
            printf("%d %d\n", ten, indiv);
            printf("antitone: ");
            printf("%d %d\n", indiv, ten);
            break;
        case 3:
            printf("%d %d %d\n", hundred, ten, indiv);
            printf("antitone: ");
            printf("%d %d %d\n", indiv, ten, hundred);
            break;
        case 4:
            printf("%d %d %d %d\n", thousand, hundred, ten, indiv);
            printf("antitone: ");
            printf("%d %d %d %d\n", indiv, ten, hundred, thousand);
            break;
        case 5:
            printf("%d %d %d %d %d\n", ten_thousand, thousand, hundred, ten, indiv);
            printf("antitone: ");
            printf("%d %d %d %d %d\n", indiv, ten, hundred, thousand, ten_thousand);
            break;
        case 6:
            printf("%d %d %d %d %d %d\n", hundred_thousand, ten_thousand, thousand, hundred, ten, indiv);
            printf("antitone: ");
            printf("%d %d %d %d %d %d\n", indiv, ten, hundred, thousand, ten_thousand, hundred_thousand);
            break;
        default:
            printf("not find.");
            break;
    }

    return 0;
}
