#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("������һ����Ȼ��:");
    scanf("%d", &n);
    while (n <= 100)
    {
        sum = sum + n;
        n++;
    }
    printf("���Ϊ��%d\n", sum);
    return 0;
}
