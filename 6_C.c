/*题目描述
定义一个整型二维数组a[3][4]，从键盘上输入各元素值，
输出其中的最大值及其对应的行号、列号，最小值及其对应的行号、列号。
输入
输入：3行4列的整型二维数组
输出
第一行输出：最大值 行号 列号（数据之间空1格）
第二行输出：最小值 行号 列号（数据之间空1格）
样例输入 复制
3 5 9 8
2 6 4 1
7 5 2 6
样例输出 复制
9 0 2
1 1 3
*/

#include <stdio.h>
int main()
{
    int arr[3][4];
    for (int f1 = 0; f1 < 3; f1++)
        for (int f2 = 0; f2 < 4; f2++)
            scanf("%d", &arr[f1][f2]);
    int max = arr[0][0], min = arr[0][0];
    int max_idx[] = {0, 0};
    int min_idx[] = {0, 0};
    for (int f1 = 0; f1 < 3; f1++)
        for (int f2 = 0; f2 < 4; f2++)
        {
            if (max < arr[f1][f2])
            {
                max = arr[f1][f2];
                max_idx[0] = f1;
                max_idx[1] = f2;
            }
            if (min > arr[f1][f2])
            {
                min = arr[f1][f2];
                min_idx[0] = f1;
                min_idx[1] = f2;
            }
        }
    printf("%d %d %d\n%d %d %d\n", max, max_idx[0], max_idx[1], min, min_idx[0], min_idx[1]);
    return 0;
}