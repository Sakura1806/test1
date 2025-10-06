#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("请输入一个自然数:");
    scanf("%d", &n);
    while (n <= 100)
    {
        sum = sum + n;
        n++;
    }
    printf("结果为：%d\n", sum);
    return 0;
}
