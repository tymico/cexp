﻿/*
 *数组初始化
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char array2[13] = "How are you!";
    char array3[13] = {'H', 'o', 'w', ' ', 'a', 'r', 'e', ' ', 'y', 'o', 'u', '!'};
    int array4[4][4] = {
        12, 18, 6, 25,
        23, 10, 32, 16,
        25, 63, 1, 62,
        0, 0, 27, 98
    };
    char array5[] = "How are you!";
    int array6[][2] = {
        {1, 50},
        {45, 2},
        {2, 0},
        {12, 32},
        {42, 33},
        {15, 18}
    };
    return 0;
}
