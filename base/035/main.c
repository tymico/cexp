/*
 *综合实例2
 */
#include <stdio.h>

#define M (5)
#define N (10)

float score[N][M];
float a_stu[N], a_cor[M];

/*输入学生成绩*/
void input_stu();
/*计算学生的平均分*/
void avr_stu();
/*计算学科的平均分*/
void avr_cor();
/*找最高分*/
float highest(int *r, int * c);
/*求方差*/
float s_diff();

int main(int argc, char * argv[])
{
    int i, j, r, c;
    float h;
    r = 0;
    c = 1;
    input_stu();
    avr_stu();
    avr_cor();
    printf("\n\t序号\t课程1\t课程2\t课程3\t课程4\t课程5\t平均分");
    for (i = 0; i < N; ++i) {
        printf("\n\tNO %2d", 1+i);
        for (j = 0; j < M; ++j) {
            printf("%8.2f", score[i][j]);
        }
        printf("%8.2f", a_stu[i]);
    }
    printf("\n课平均");
    for (j = 0; j < M; ++j) {
        printf("%8.2f", a_cor[j])
    }
    h = highest(&r, &c);
    printf("\n\n最高分%8.2f 是 %d 号学生的第%d门课\n", h, r, c);
    printf("\t方差 %8.2f\n", s_diff());
    return 0;
}

void input_stu()
{
}

void avr_stu()
{
}

void avr_cor()
{
}

float highest(int *r, int * c)
{
}

float s_diff()
{
}

