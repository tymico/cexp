/*
 *嵌套if语句
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    /*性别(sex>=0 male, sex<0 female)，体重，输血量*/
    int sex, weight, cubage;
    printf("请输入输血者性别和体重：");
    scanf("%d %d", &sex, &weight);
    if (sex >= 0) {
        if (weight >= 120) {
            cubage = 200;
        } else {
            cubage = 180;
        }
    } else {
        if (weight >= 100) {
            cubage = 150;
        } else {
            cubage = 120;
        }
    }
    printf("此人应该输血 %d 毫升\n", cubage);

    return 0;
}
