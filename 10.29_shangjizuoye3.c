#include <stdio.h>
int main()
{
    int  a,b,c;
    a=10;b=60;c=30;
    if(a>b)  a=b;
    b=c;
    c=a;
    printf("a=%d,b=%d,c=%d\n" , a , b, c );
    return 0;
}


#include <stdio.h>
int main()
{ int i=1;
    switch(i)
    {
    case 1:printf("%d\t",i++);
        // break;
    case 2:printf("%d\t",i++);
    case 3:printf("%d\t",i++);
    case 4:printf("%d\t",i++);
    }
    printf("\ni=%d\n",i);
    return 0;
}


# include <stdio.h>
void main()
{

    int logic;
    int a = 1;
    int b = 2;
    int c = 3;
    logic = a+b>c&&b<=c;
    printf("logic = %d\n", logic);
    logic = (a>=(b+c))||(b==c);
    printf("logic = %d\n", logic);
    logic = !(a<c)+b!=1&&(a+c)/2;
    printf("logic = %d\n", logic);
}


# include <stdio.h>
void main()
10
{
    int i, j, k;
    int m, n, p;
    i = 8;
    j = 10;
    k = 12;

    m = ++i;
    printf("i = %d\n", i);
    printf("m = %d\n", m);

    n = j--;
    printf("j = %d\n", j);
    printf("n = %d\n", n);

    p = (++m)*(n++)+(--k);
    printf("k = %d\n", k);
    printf("p = %d\n", p);
}


# include <stdio.h>
void main()
{
    int x, y, z, mid, dec;
    printf("请任意输入三个整数：\n");
    scanf("%d %d %d", &x, &y, &z);
    if(x < y)
    {
        mid = x; x = y; y = mid;
    }
    if(x < z)
    {
        mid = x; x = z; z = mid;
    }
    if(y < z)

          {
              mid = y; y = z; z = mid;
          }
    printf("请输入一个整数，程序根据其正负判断输出：\n");
    scanf("%d", &dec);
    if(dec >= 0) printf("最大整数为：%d\n", x);
    else printf("最小整数为：%d\n", z);
}


# include <stdio.h>
void main()
{
    int x, y;
    printf("请输入自变量x：");
    scanf("%d", &x);
    if(x < 6)
    {
        y = x - 12;
        printf("x = %d, y = %d\n", x, y);
    }
    else if(x < 15)
    {
        y = 3*x - 1;
        printf("x = %d, y = %d\n", x, y);
    }
    else
    {
        y = 5*x + 9;
        printf("x = %d, y = %d\n", x, y);
    }
}

# include <stdio.h>
void main()
{
    /* sex 代表输血者的性别，weight代表输血者的体重，cubage代表输血量 */
    int sex, weight, cubage;
    printf("请给出输血者的性别和体重：");
    scanf("%d,%d", &sex, &weight);
    if(sex >= 0)
        /* 若变量sex的数值为非负数，则表示为男性 */
    {
          if(weight >= 120)
          {
              cubage = 200;
              printf("此人应该输血：%d毫升\n", cubage);
          }
          else
          {
              cubage = 180;
              printf("此人应该输血：%d毫升\n", cubage);
          }
    }
    else   /* 否则，表示为女性 */
    {
        if(weight >= 100)
        {   cubage = 150;
            printf("此人应该输血：%d毫升\n", cubage);
        }
        else
        {
            cubage = 120;
            printf("此人应该输血：%d毫升\n", cubage);
        }
    }
}


// (二)完成程序
#include <stdio.h>
int main()
{
    char  ch ;
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    else if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;
    printf("%c\n",ch);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float s, area;
    scanf("%f,%f,%f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形的面积为：%f\n", area);

        if (a == b && b == c)
            printf("等边三角形\n");

        else if (a == b || a == c || b == c)
            printf("等腰三角形\n");

        else if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a))
            printf("直角三角形\n");
        else
            printf("一般三角形\n");
    }
    else
        printf("不能组成三角形\n");
    return 0;
}


#include <stdio.h>
int main()
{
    int day, month, year, sum, leap;
    printf("please input year,month,day\n");
    scanf("%d,%d,%d", &year, &month, &day);
    switch (month)
    {
    case 1: sum = 0; break;
    case 2: sum = 31; break;
    case 3: sum = 59; break;
    case 4: sum = 90; break;
    case 5: sum = 120; break;
    case 6: sum = 151; break;
    case 7: sum = 181; break;
    case 8: sum = 212; break;
    case 9: sum = 243; break;
    case 10: sum = 273; break;
    case 11: sum = 304; break;
    case 12: sum = 334; break;
    default: printf("data error"); break;
    }
    sum = sum + day;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        leap = 1;
    else
        leap = 0;
    if (leap == 1 && month > 2)
        sum++;
    printf("It is the %dth day.\n", sum);
    return 0;
}

// 不能直接写3<x<=9、-1<x<=3这样的连续关系表达式，需拆分为逻辑与的形式，如x>3 && x<=9、x>-1 && x<=3。
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x > 3 && x <= 9) y = x * (x + 2);
    else if (x > -1 && x <= 3) y = 2 * x;
    else if (x <= -1) y = x - 1;
    else y = -1;
    printf("%d\n", y);
    return 0;
}


程序逻辑错误
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x < 0)
        y = x - 3;
    else if (x == 0)
        y = 0;
    else
        y = x + 3;
    printf("y=%d\n", y);
    return 0;
}


// 题目：1
#include <stdio.h>
int main() {
    char gender;
    float weight;
    printf("请输入性别（m-男性，f-女性）和体重（公斤）：");
    scanf("%c%f", &gender, &weight);
    if (gender == 'm' || gender == 'M') {
        if (weight > 120)
            printf("输血量：200毫升\n");
        else
            printf("输血量：180毫升\n");
    } else if (gender == 'f' || gender == 'F') {
        if (weight > 100)
            printf("输血量：150毫升\n");
        else
            printf("输血量：120毫升\n");
    } else {
        printf("性别输入错误！\n");
    }
    return 0;
}

// 题目2：
#include <stdio.h>
int main() {
    int num, digit, count = 0, reverse = 0, temp;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);
    temp = num;
    // 计算位数并逆序
    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
        count++;
    }
    printf("它是%d位数\n", count);
    printf("每一位数字：");
    temp = reverse;
    while (temp != 0) {
        printf("%d ", temp % 10);
        temp /= 10;
    }
    printf("\n逆序：%d\n", reverse);
    return 0;
}

题目·3：
#include <stdio.h>
int main() {
    float score;
    printf("请输入学生成绩（0-100）：");
    scanf("%f", &score);
    if (score < 0 || score > 100) {
        printf("成绩输入错误！\n");
    } else {
        if (score >= 90)
            printf("等级：A\n");
        else if (score >= 80)
            printf("等级：B\n");
        else if (score >= 70)
            printf("等级：C\n");
        else if (score >= 60)
            printf("等级：D\n");
        else
            printf("等级：E\n");
    }
    return 0;
}

题目·4：
#include <stdio.h>
int main() {
    int num, a, b, c;
    printf("请输入一个三位正整数：");
    scanf("%d", &num);
    a = num / 100;      // 百位
    b = (num / 10) % 10; // 十位
    c = num % 10;       // 个位
    if (a*a*a + b*b*b + c*c*c == num)
        printf("%d是水仙花数\n", num);
    else
        printf("%d不是水仙花数\n", num);
    return 0;
}


题目5：
#include <stdio.h>
int main() {
    float p, salary = 500;
    printf("请输入工程利润p：");
    scanf("%f", &p);
    if (p > 10000)
        salary += p * 0.25;
    else if (p > 5000)
        salary += p * 0.20;
    else if (p > 2000)
        salary += p * 0.15;
    else if (p > 1000)
        salary += p * 0.10;
    // p<=1000时无提成，保底500
    printf("员工薪水：%.2f元\n", salary);
    return 0;
}