//  #include <stdio.h>
// int main()
// { int  a=2,b=8;
//     while(b--<0)
//         b-=a ;
//     a++ ;
//     printf("a=%d,b=%d\n",a,b);
//     return 0;
// }
//
// #include  <stdio.h>
//
// int main()
// {
//     int  x=2 ,y=6 , z=3;
//     do
//         y=y-1;
//     while(z-->0&&++x<5);
//     printf("x=%d\ty=%d\tz=%d\n",x,y,z);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int s=0,t,i,j;
//     for(i=1;i<=3;i++)
//     {
//         t=1;
//         for(j=1;j<=2*i-1;j++)
//             t=t*j;
//         s=s+t;
//     }
//     printf("%-5d\n",s);
//     return 0;
// }


// # include <stdio.h>
// void main()
// {
//     int i, j, k;
//     /* 变量i从0到4，表示所画菱形图的第一至第五行 */
//     for(i = 0; i <= 4; i++)
//     {
//         /* 当行数为i时，空格数是i的函数，为4-i个 */
//         for(j = 0; j <= 3-i; j++)
//             printf(" ");
//
//           /* 星号数也是i的函数，为2i+1个 */
//           for(k = 0; k <= 2*i; k++)
//               printf("*");
//         printf("\n");
//     }
//     /* 变量i从0到3，表示所画菱形图的第六至第九行 */
//     for(i = 0; i <= 3; i++)
//     {
//         /* 当行数为i时，空格数是i的函数，此时为i个 */
//         for(j = 0; j <= i; j++)
//             printf(" ");
//         /* 星号数也是i的函数，此时为7-2i个 */
//         for(k = 0; k <= 6-2*i; k++)
//             printf("*");
//         printf("\n");
//     }
// }


//
// # include <stdio.h>
// void main( )
// {
//     int radius;
//     double area;
//     for(radius = 1; radius <= 10 ; radius++)
//     {
//         area = 3.1416 * radius * radius;
//         /* 若圆面积超过120，则跳出for循环，不予输出 */
//         if(area >= 120.0)
//             break;
//         printf("square = %f\n", area);
//     }
//     printf("now radius=%d\n\n", radius-1);
//
//     for(radius = 1; radius <= 10 ; radius++)
//     {
//         area = 3.1416 * radius * radius;
//         /* 若圆面积没有超过60，则不输出而是从新开始循环 */
//         if(area < 120.0)
//             continue;
//         printf("square = %f\n", area);
//         }
//     printf("now radius=%d\n", radius-1);
// }

// void main()
// {
//     int x,i;
//     for(i＝1;i<＝100;i++)
//     {
//         x＝i;
//         if(++x%2＝＝0)
//             if(++x%3＝＝0)
//                 if(++x%7＝＝0)
//                     printf(“%d,”,x);
//     }
// }
//
// #include "stdio.h"
// int main()
// {
//     char c,s[]="ABCCDA";
//     int k;
//     for(k=1;(c=s[k])!='\0';k++)
//     {
//         switch(c)
//         {
//         case  'A':putchar('%');continue;
//         case  'B':++k;break;
//         default:  putchar('*');
//         case  'C':putchar('&');continue;
//         }
//         putchar('#');
//         }
// }


// 1. 以下程序的功能是计算正整数 2345 的各位数字平方和，请在_______上填 写正确内容。
// #include <stdio.h>
// int main()
// {
//     int  n, sum = 0;
//     n = 2345;
//     do
//     {
//         sum = sum + (n % 10) * (n % 10);  // 提取末位数字，计算平方并累加
//         n = n / 10;  // 去掉末位数字，准备处理下一位
//     } while (n);
//     printf("sum=%d\n", sum);
//     return 0;
// }

// 2. 以下程序的功能是计算S=2+4+8+16+…+128，请在______上填写正确内容。

// #include <stdio.h>
// int main()
// {
//     int  a, s, n, count;
//     a = 2, s = 0, n = 1, count = 1;
//     while (count <= 7)
//     {
//         n = n * 2;  // 每次将n乘以2，得到下一个累加项（2,4,8...）
//         s = s + n;
//         count++;    // 计数加1，控制循环次数
//     }
//     printf("s = %d\n", s);
//     return 0;
// }


// 3. 以下程序功能是完成用10元人民币换成一角、两角、五角的所有兑换方案， 请在_______上填写正确内容
// #include <stdio.h>
// int main()
// {
//     int i, j, k, n = 0;
//     for (i = 0; i <= 20; i++)  // i表示五角的张数（最多20张，20×0.5=10元）
//         for (j = 0; j <= 50; j++)  // j表示两角的张数（最多50张，50×0.2=10元）
//         {
//             for (k = 0; k <= 100; k++)  // k表示一角的张数（最多100张，100×0.1=10元）
//                 if (0.5 * i + 0.2 * j + 0.1 * k == 10)  // 总金额等于10元的条件
//                 {
//                     n++;  // 方案数加1
//                     printf(" 第%d种:  %3d  %3d  %3d", n, i, j, k);
//                     if (n % 3 == 0) printf(" \n ");
//                 }
//         }
//     return 0;
// }
//
//
// #include <stdio.h>
// int main()
// {
//     int k = 100;
//     while (k >= 0)  // 修正：将赋值改为判断，循环条件应为k>=0
//     {
//         printf("%d,", k);
//         k--;
//         if (k % 10 == 9) printf("\n");  // 修正：当k%10==9时换行（确保每行10个）
//     }
//     return 0;
// }
//
//
//
//
//
// #include <stdio.h>
// int main()
// {
//     int i, n, s = 1;
//     printf("Please enter n:");
//     scanf("%d", &n);
//     if (n == 0) {
//         s = 1;  // 0! = 1
//     } else {
//         for (i = 1; i <= n; i++)
//             s = s * i;
//     }
//     printf("%d! = %d\n", n, s);
//     return 0;
// }
//
// #include <stdio.h>
// int main()
// {
//     int i = 1;  // 初始化为1，从1开始输出
//     while (i <= 100)  // 循环条件：i不超过100
//     {
//         printf("%4d,", i);
//         if (i % 10 == 0) printf("\n");  // 每10个数换行
//         i++;  // i自增
//     }
//     return 0;
// }


// (四)编写程序*
// 1．输入两个正整数，计算这两个数的最大公约数和最小公倍数。
// #include <stdio.h>
//
// int g(int a, int b) {
//     while (b != 0) {
//         int t = b;
//         b = a % b;
//         a = t;
//     }
//     return a;
// }
//
// int l(int a, int b, int g) {
//     return (a * b) / g;
// }
//
// int main() {
//     int n1, n2;
//     printf("请输入第一个正整数：");
//     scanf("%d", &n1);
//     printf("请输入第二个正整数：");
//     scanf("%d", &n2);
//
//     int d = g(n1, n2);  // 最大公约数
//     int m = l(n1, n2, d);  // 最小公倍数
//
//     printf("%d 和 %d 的最大公约数是：%d\n", n1, n2, d);
//     printf("%d 和 %d 的最小公倍数是：%d\n", n1, n2, m);
//
//     return 0;
// }
//

// 2. 小明妈妈给他买了若干块巧克力，小明第一天吃了一半，还不过瘾，又多
// 吃了一块，第二天又将剩下的巧克力吃掉一半，又多吃一块，以后每天都吃了前
// 一天剩下的一半零一块。到第10天再想吃时，只剩下一块了。编程计算小明妈
// 妈总共给小明买了多少块巧克力？

#include <stdio.h>

int main() {
    int day = 10;
    int num = 1;  // 第10天剩下1块
    // 从第9天倒推到第1天
    for (int i = 9; i >= 1; i--) {
        num = (num + 1) * 2;
    }
    printf("小明妈妈总共买了%d块巧克力\n", num);
    return 0;
}

// 3。 一百万富翁遇到一个陌生人，陌生人找他谈一个换钱的计划，该计划如下：
// 我每天给你十万元，而你第一天只需给我一分钱，第二天我仍给你十万元，你给
// 我二分钱，第三天我仍给你十万元，你给我四分钱，…,你每天给我的钱是前一
// 天的两倍，直到满一月(30 天) ，百万富翁很高兴，欣然接受了这个契约。请编
// 写一个程序计算这一个月中陌生人给了百万富翁多少钱？百万富翁给陌生人多
// 少钱？
#include <stdio.h>
#include <math.h>

int main() {
    int days = 30;
    // 陌生人每天给10万元，30天的总金额
    double stranger_give = 100000.0 * days;
    // 百万富翁每天给的钱是前一天的两倍，第一天1分，即0.01元
    double rich_give = 0.0;
    double day_money = 0.01;  // 第一天给的钱，单位：元

    for (int i = 1; i <= days; i++) {
        rich_give += day_money;
        day_money *= 2;  // 每天给的钱翻倍
    }

    printf("陌生人给百万富翁的总金额：%.2f 元\n", stranger_give);
    printf("百万富翁给陌生人的总金额：%.2f 元\n", rich_give);

    return 0;
}

// 4、
#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数（函数名简化为p）
int p(int n) {
    if (n <= 1) return 0;  // 1不是素数
    if (n == 2) return 1;  // 2是素数
    if (n % 2 == 0) return 0;  // 偶数不是素数（除2外）
    // 检查3到sqrt(n)之间的奇数是否能整除n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;  // 是素数
}

// 验证指定范围内的偶数是否符合哥德巴赫猜想（函数名简化为c）
void c(int start, int end) {
    // 确保范围为偶数，且start > 2
    if (start <= 2) start = 4;
    if (start % 2 != 0) start++;  // 若start是奇数，转为下一个偶数

    for (int even = start; even <= end; even += 2) {
        int found = 0;  // 标记是否找到符合条件的素数对
        // 寻找两个素数p和q，使p + q = even
        for (int p1 = 2; p1 <= even / 2; p1++) {
            int p2 = even - p1;  // p2 = 偶数 - p1
            if (p(p1) && p(p2)) {  // 若p1和p2都是素数
                printf("%d = %d + %d\n", even, p1, p2);
                found = 1;
                break;  // 找到一组即可
            }
        }
        if (!found) {
            printf("警告：%d 无法表示为两个素数之和！\n", even);
        }
    }
}

int main() {
    // 验证10000以内的偶数（可修改范围）
    printf("验证10000以内的偶数是否符合哥德巴赫猜想：\n");
    c(4, 10000);
    return 0;
}