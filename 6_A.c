/*题目描述
给定一个从小到大有序的整数序列，将其保存至数组。另外输入一个整数，将其插入至这个数组中并保持数组有序。
输入
第一行有一个正整数n，表示原始的整数序列长度为n，保证n不超过50。
第二行有n个整数，表示原始的整数序列，保证这个序列是从小到大给出的。
第三行有一个整数，表示需要插入的整数。
输出
在一行中输出n+1个整数，表示完成插入的整数序列。每个整数后输出一个空格。
请注意行尾输出换行。
样例输入 复制
10
1 2 3 4 5 6 7 9 10 11
8
样例输出 复制
1 2 3 4 5 6 7 8 9 10 11
*/

#include <stdio.h>
void printa(int array_int[], int size)
{
    for (int f = 0; f < size; f++)
        printf("%d ", array_int[f]);
    printf("\n");
}
int main()
{
    int n, reg;
    int arr[51];
    scanf("%d", &n);
    getchar();
    for (int f = 0; f < n; f++)
        scanf("%d", &arr[f]);
    getchar();
    scanf("%d", &reg);
    for (int f = 0; f < n; f++)
    {
        if (reg < arr[f])
        {
            for (int f2 = n; f2 > f; f2--)
            {
                arr[f2] = arr[f2 - 1];
            }
            arr[f] = reg;
            break;
        }
    }
    printa(arr, n + 1);
    return 0;
}