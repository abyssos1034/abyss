/*题目描述
输入一个正整数n，定义包含n个元素的动态一维数组（int型），键盘依次输入n个元素。
将数组中的元素按照与原来相反的次序存放在同一数组，然后输出。
要求：不用另外的数组，而是通过交换数组元素来实现。
输入
输入数组元素个数n以及这n个元素
输出
输出重新存放的n个元素（各元素之间有一个空格）
样例输入 复制
8
1 3 5 7 2 4 6 8
样例输出 复制
8 6 4 2 7 5 3 1
*/

#include <stdio.h>
#include <stdlib.h>
void printa(int array_int[], int size) // 输出数组【int类型】
{
    for (int f = 0; f < size; f++)
        printf("%d ", array_int[f]);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // 分配内存失败时退出程序
    }
    for (int f = n - 1; f >= 0; f--)
        scanf("%d", &arr[f]);
    printa(arr, n);
    return 0;
}