/*
 *数组应用
 *学生成绩查询系统
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int score[5][7];
    int select;
    int i, j;
    int average = 0;
    int sum = 0;
    do {
        printf("本程序有4项功能：\n");
        printf("1 根据学号查询学生成绩\n");
        printf("2 根据考试号统计成绩\n");
        printf("3 根据考试号和学号查询成绩\n");
        printf("4 成绩录入\n");
        printf("0 退出\n");
        printf(" 请输入选择（0-4）：");
        scanf("%d", &select);
        switch (select) {
            case 0:
                printf("Goodbay\n");
                exit(0);
                break;
            case 1:
                printf("请输入学号:");
                scanf("%d\n", &i);
                break;
            case 2:
                printf("输入考试号：");
                scanf("%d\n", &j);
                break;
            case 3:
                printf("输入学号和考试号:");
                scanf("%d %d\n", &i, &j);
                break;
            case 4:
                printf("请输入成绩：\n");
                for (i = 0; i < 4; ++i) {
                    for (j = 0; < 7; ++j) {
                        scanf("%d\n", &score[i][j]);
                    }
                }
                break;
            default:
                break;
        }
    } while (seclect == 0);

    return 0;
}
