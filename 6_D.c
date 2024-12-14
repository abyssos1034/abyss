/*题目描述
设A、B、C为2行4列矩阵（每个元素为double型）。
设计矩阵加法程序，实现C=A+B。先从键盘输入矩阵A，然后输入矩阵B，最后输出矩阵C。
输入
输入：先输入矩阵A的2行元素，再输入矩阵B的2行元素。
输出
输出：矩阵C的2行元素（数据之间用1个空格分开）
样例输入 复制
1 3 5 7
2 4 6 8
10 30 50 70
20 40 60 80
样例输出 复制
11 33 55 77
22 44 66 88
*/

#include <stdio.h>
int main()
{
    double A[2][4];
    double B[2][4];
    double C[2][4];
    for (int f1 = 0; f1 < 2; f1++)
        for (int f2 = 0; f2 < 4; f2++)
            scanf("%lf", &A[f1][f2]);
    for (int f1 = 0; f1 < 2; f1++)
        for (int f2 = 0; f2 < 4; f2++)
            scanf("%lf", &B[f1][f2]);
    for (int f1 = 0; f1 < 2; f1++)
        for (int f2 = 0; f2 < 4; f2++)
            C[f1][f2] = A[f1][f2] + B[f1][f2];
    for (int f1 = 0; f1 < 2; f1++)
    {
        for (int f2 = 0; f2 < 4; f2++)
        {
            printf("%g ", C[f1][f2]);
        }
        printf("\n");
    }
}