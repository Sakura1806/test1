#include <stdio.h>
void fun (int  x, int  y, int  z)
{ z=x * x + y * y;
}
int main()
{ int  a=38;
    fun(7,3,a);
    printf("%d\n",a);
    return 0;
}
// 还是38


#include <stdio.h>
void  fun (int x,int y );
int main()
{ int x=5,y=3;
    fun(x,y);
    printf("%d,%d\n",x,y);
    return 0;
}
void  fun (int x,int y )
{ x=x+y;
    y=x-y;
    x=x-y;
    printf("%d,%d\n",x,y);
}



#include <stdio.h>
int f (int a);
int main()
{ int s[8] = {1,2,3,4,5,6},i,d=0;
    for (i=0;f(s[i]) ;i++)
        // 循环：i从0开始，条件是f(s[i])为真，每次循环i++，循环内累加s[i]到d
        d+=s[i];
    printf("%d\n",d);
    return 0;
}
int f(int a)
{
    return a%2;
}




#include<stdio.h>

long  f( int  g)
{
    switch(g)
    {
    case 0:return  0;
    case 1:
    case 2: return  1;
    }
    return  (f(g-1)+f(g-2));
}
int main ( )
{
    long k;
    k = f(7);
    printf("k= %d\n",k);
    return 0;
}

#include <stdio.h>
int f(int b[ ][4])
{ int i,j,s=0;
    for(j=0;j<4;j++)
    { i=j;
        if(i>2)  i=3-j;
        s+=b[i][j];
    }
    return s;
}
int main( )
{
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printf("%d\n",f(a) );
    return 0;
}

# include <stdio.h>
int square(int x);
int cube(int y);
void main()
{
    int m = 12;
    int n = 4;
    printf("%d %d\n", square(m), m);
    printf("%d %d\n", cube(n), n);
}
int square(int x)
{
    x = x*x;
    return x;
}
int cube(int y)
{
    y = y*y*y;
    return y;
}


#include <stdio.h>
double max(double  a,double  b);

int main()
{
    double   x,y;
    scanf("%lf%lf",&x,&y);
    printf("%.8lf\n",max(x,y));
    return 0;
}

double max(double  a,double  b)
{
    return (a>b ? a:b) ;  }

#include <stdio.h>



double fun(double x, int y)
{
    int i;
    double z;
    for(i = 1, z = x; i < y; i++)
        z = z * x;
    return z;
}

int main()
{
    double x;
    int y;
    // 输入底数x和指数y
    scanf("%lf %d", &x, &y);
    // 调用fun函数计算并输出x的y次方
    double result = fun(x, y);
    printf("%.2f的%d次方是%.2f\n", x, y, result);
    return 0;
}


#include <stdio.h>

int mystrlen(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++);
    return(i);
}

int main()
{
    char str[100];
    // 输入字符串
    scanf("%s", str);
    // 调用mystrlen函数计算并输出字符串长度
    int len = mystrlen(str);
    printf("字符串的长度是：%d\n", len);
    return 0;
}



#include <stdio.h>

int main()
{
    int age(int n);
    int n = 12;
    printf("Age is %d\n", age(n));
    return 0;
}

int age(int n)
{
    int c;
    // 添加递归终止条件：第1位学生年龄为10岁
    if (n == 1)
        return 10;
    c = age(n - 1) + 2;
    return c;
}


#include <stdio.h>

int sstrcmp(char s[], char t[])
{
    int i = 0;
    while (s[i] && t[i] && s[i] == t[i]) {
        i++;
    }
    return s[i] - t[i];
}

int main()
{
    int x;
    char s1[50], s2[50];
    scanf("%s%s", s1, s2);
    x = sstrcmp(s1, s2);
    printf("%d\n", x);
    return 0;
}

#include <stdio.h>

int main()
{
    int age(int n);
    int n = 12;
    printf("Age is %d\n", age(n));
    return 0;
}

int age(int n)
{
    int c;
    // 添加递归终止条件：第1位学生年龄为10岁
    if (n == 1)
        return 10;
    c = age(n - 1) + 2;
    return c;
}

// 编写程序
#include <stdio.h>

// 筛选并输出符合条件的两位数
void findSpecialNumbers() {
    int num;
    // 遍历所有两位数（10~99）
    for (num = 10; num <= 99; num++) {
        // 条件1：能被3整除；条件2：十位是5 或 个位是5
        if (num % 3 == 0 && (num / 10 == 5 || num % 10 == 5)) {
            printf("%d ", num); // 输出符合条件的数
        }
    }
}

int main() {
    printf("能被3整除且至少一位是5的两位数有：\n");
    findSpecialNumbers(); // 调用筛选函数
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <math.h> // 用于sqrt函数计算平方根

// 判断素数的函数：是素数返回1，否则返回0
int isPrime(int num) {
    // 小于等于1的数不是素数
    if (num <= 1) {
        return 0;
    }
    // 2是最小的素数
    if (num == 2) {
        return 1;
    }
    // 偶数（除了2）都不是素数，提前排除
    if (num % 2 == 0) {
        return 0;
    }
    // 遍历3到num的平方根（步长2，只检查奇数）
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) { // 能被整除，非素数
            return 0;
        }
    }
    // 所有情况都排除后，是素数
    return 1;
}

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    // 调用素数判断函数，根据返回值输出结果
    if (isPrime(num) == 1) {
        printf("%d 是素数\n", num);
    } else {
        printf("%d 不是素数\n", num);
    }

    return 0;
}


#include <stdio.h>

// 二维数组转置函数：arr为原数组，rows为行数，cols为列数，trans_arr为转置后数组
void transpose(int arr[][10], int trans_arr[][10], int rows, int cols) {
    // 遍历原数组的行和列，完成行列互换
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans_arr[j][i] = arr[i][j];
        }
    }
}

// 辅助函数：打印二维数组（方便输出查看）
void printArray(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 定义原二维数组（示例：3行4列）
    int original[3][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3;    // 原数组行数
    int cols = 4;    // 原数组列数

    // 定义转置数组（列数变行数，行数变列数）
    int transposed[10][10] = {0};

    // 调用转置函数
    transpose(original, transposed, rows, cols);

    // 输出原数组
    printf("原二维数组：\n");
    printArray(original, rows, cols);

    // 输出转置后的数组（行数=原列数，列数=原行数）
    printf("\n转置后的数组：\n");
    printArray(transposed, cols, rows);

    return 0;
}


#include <stdio.h>

// 检查x和y是否都落在[0, n-1]闭区间内，是则返回1，否则返回0
int check(int x, int y, int n) {
    // 同时满足x和y的区间条件
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y, n;
    // 输入x、y、n的值
    printf("请输入x、y、n（以空格分隔）：");
    scanf("%d %d %d", &x, &y, &n);

    // 调用check函数，根据返回值判断结果
    int result = check(x, y, n);
    if (result == 1) {
        printf("x=%d 和 y=%d 都落在 [0, %d] 闭区间内\n", x, y, n-1);
    } else {
        printf("x=%d 或 y=%d 未落在 [0, %d] 闭区间内\n", x, y, n-1);
    }

    return 0;
}




#include <stdio.h>
#include <math.h> // 用于pow函数计算10的幂次

// 获取正整数n从右数的第k位数字，超出位数返回0
int digit(int n, int k) {
    // 确保n是正整数（题目要求n为正整数，容错处理）
    if (n <= 0 || k <= 0) {
        return 0;
    }

    // 计算10^(k-1)，将目标位移到个位
    int power = pow(10, k - 1);
    // 先整除power，再取余10，得到第k位数字
    int res = (n / power) % 10;

    return res;
}

int main() {
    int n, k;
    // 输入正整数n和位数k
    printf("请输入一个正整数n和要提取的位数k（以空格分隔）：");
    scanf("%d %d", &n, &k);

    // 调用digit函数
    int result = digit(n, k);

    // 输出结果
    if (result == 0) {
        // 区分“数字本身是0”和“超出位数”（可选优化）
        int temp = n;
        int len = 0;
        while (temp > 0) { // 计算n的位数
            len++;
            temp /= 10;
        }
        if (k > len) {
            printf("正整数%d没有从右数的第%d位数字！\n", n, k);
        } else {
            printf("正整数%d从右数的第%d位数字是：%d\n", n, k, result);
        }
    } else {
        printf("正整数%d从右数的第%d位数字是：%d\n", n, k, result);
    }

    return 0;
}


#include <stdio.h>
#include <string.h> // 用于strlen获取字符串长度

// 统计字符串中重复字符并输出（重复指出现次数>1）
void countRepeatedChars(char str[]) {
    // 定义计数数组，初始化为0（ASCII码0~127覆盖所有可见/不可见字符）
    int count[128] = {0};
    int len = strlen(str); // 获取字符串长度

    // 第一步：遍历字符串，统计每个字符的出现次数
    for (int i = 0; i < len; i++) {
        // 字符的ASCII码作为数组下标，计数+1
        count[(unsigned char)str[i]]++;
    }

    // 第二步：遍历计数数组，输出重复字符（次数>1）
    printf("字符串中重复的字符及次数：\n");
    int hasRepeated = 0; // 标记是否有重复字符
    for (int i = 0; i < 128; i++) {
        if (count[i] > 1) {
            printf("字符 '%c' (ASCII:%d)：%d 次\n", i, i, count[i]);
            hasRepeated = 1;
        }
    }

    // 若无重复字符，给出提示
    if (!hasRepeated) {
        printf("该字符串中无重复字符！\n");
    }
}

int main() {
    char input[1000]; // 定义足够大的字符数组存储输入字符串
    printf("请输入一个字符串：");
    // 读取整行输入（包含空格，避免scanf截断）
    fgets(input, sizeof(input), stdin);

    // 去除fgets读取的换行符（可选优化）
    input[strcspn(input, "\n")] = '\0';

    // 调用统计函数
    countRepeatedChars(input);

    return 0;
}


#include <stdio.h>

// 查找数组中间元素的指针，n为偶数时返回较大下标的中间元素指针
int *find_middle(int a[], int n) {
    // 边界判断：数组长度无效时返回NULL
    if (n <= 0) {
        return NULL;
    }
    // 计算中间下标（奇偶统一为n/2，满足“偶数选较大下标”要求）
    int mid = n / 2;
    // 返回指向中间元素的指针（数组名a本质是首元素指针，a+mid等价于&a[mid]）
    return a + mid;
}

int main() {
    // 测试用例1：奇数长度数组（n=5）
    int arr1[] = {10, 20, 30, 40, 50};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int *mid1 = find_middle(arr1, n1);
    if (mid1 != NULL) {
        printf("数组1：");
        for (int i = 0; i < n1; i++) {
            printf("%d ", arr1[i]);
        }
        printf("\n中间元素下标：%d，值：%d\n\n", mid1 - arr1, *mid1);
    }

    // 测试用例2：偶数长度数组（n=4）
    int arr2[] = {1, 2, 3, 4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int *mid2 = find_middle(arr2, n2);
    if (mid2 != NULL) {
        printf("数组2：");
        for (int i = 0; i < n2; i++) {
            printf("%d ", arr2[i]);
        }
        printf("\n中间元素下标：%d，值：%d\n\n", mid2 - arr2, *mid2);
    }

    // 测试用例3：边界值（n=1）
    int arr3[] = {99};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int *mid3 = find_middle(arr3, n3);
    if (mid3 != NULL) {
        printf("数组3：");
        for (int i = 0; i < n3; i++) {
            printf("%d ", arr3[i]);
        }
        printf("\n中间元素下标：%d，值：%d\n", mid3 - arr3, *mid3);
    }

    return 0;
}









