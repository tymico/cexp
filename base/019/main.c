/*
 *一维数组
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int i, j, min, temp;
    int array[10];
    printf("input 10 integer:\n");
    for (i = 0; i < 10; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", array+i);
    }

    printf("the array is: ");
    for (i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (i = 0; i < 10; ++i) {
        min = i;
        for (j = i; j < 10; ++j) {
            if (array[min] > array[j]) {
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    printf("the array is: ");
    for (i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
