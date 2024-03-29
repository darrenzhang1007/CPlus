/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 15:35:41
 * @LastEditTime: 2021-11-21 15:35:42
 * @LastEditors: Please set LastEditors
 * @Description: 内存泄漏
 * @FilePath: /CPlus/shiqiyu_cplus/5.3.2_memory_leak.c
 */
#include <stdio.h>
#include <stdlib.h>

void foo()
{
    int *p = (int *)malloc(sizeof(int));
    return;
} //memory leak

int main()
{
    int *p = NULL;

    p = (int *)malloc(4 * sizeof(int));
    // some statements
    p = (int *)malloc(8 * sizeof(int));
    // some statements
    free(p);
    // the first memory will not be freed

    for (int i = 0; i < 10240; i++)
    {
        p = (int *)malloc(1024 * 1024 * 1024);
    }
    printf("End\n");

    return 0;
}