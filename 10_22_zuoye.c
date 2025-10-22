#include <stdio.h>

int main(void)
{
        int a = 5;
        char c = 'a';
        float f = 5.3;
        double m = 13.65;
        double result;
        printf("a + c = %d\n",a+c);
        printf("a + c = %c\n", a + c);
        printf("f + m = %f\n", f + m);
        printf("a + m = %f\n", a + m);
        printf("c + f = %f\n", c + f);
        result = a + c * (f + m);

        printf("double = %f\n",result);

    return 0;
}

#include <stdio.h>
int main(void)
{
    printf("How are you?\n");
    printf("I am fine.\n\n");
    printf("How are you?\t");
    printf("I am fine.\n\n");
    printf("How are you?\n");
    printf(" \bI am fine.\n\n");
    printf("           I am fine.");
    printf("\rHow are your?\n\n");
}


#include <stdio.h>
int main(void)
{

    char c1,c2;
    c1=97;c2=98;
    printf("%c,%c\n",c1,c2);
    printf("%d,%d\n",c1,c2);
    return 0;

}


#include <stdio.h>
int main(void)
{
    float x,y;
    scanf("%f",&x);
    printf("\n2.4*x-1/2=%f",2.4*x-1.0/2);
    printf("\nx%%2/5-x=%f",(int)(x)%2/5-x);
    printf("\n(x-=x*10,x/=10)=%d\n",(x-=x*10,x/=10));
    return 0;
}


#include <stdio.h>
int main()
{
    int i,j,m,n ;
    i=8;j=10;
    m=++i;
    n=j++;
    // m=i++;
    // n=++j;
    printf("%d,%d,%d,%d\n",i,j,m,n);
    return 0;
}

#include <stdio.h>

int main() {
    char a;
    int b;
    scanf("%c", &a);
    b = (int)a;
    printf("%c %d\n", a, b);
    return 0;
}

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d %o %x\n", a, a, a);
    return 0;
}


#include <stdio.h>
int main() {
    int u, v;
    u = v = 89;
    printf("u=%d,v=%d\n", u, v);
    return 0;
}

#include <stdio.h>
int main() {
    int x, y;
    scanf("%d,%d", &x, &y);
    printf("The average is %d\n", (x + y) / 2);
    return 0;
}



#include <stdio.h>
int main() {

    float sum = 1.0/2 + 1.0/3 + 1.0/4;
    printf("和为：%f\n", sum);
    return 0;
}


#include <stdio.h>
int main() {

    float sum = 1.0/2 + 1.0/3 + 1.0/4;
    printf("和为：%f\n", sum);
    return 0;
}



#include <stdio.h>
#define PI 3.1415926      
int main() {
    float r = 5.0;
    float circumference = 2 * PI * r;
    float area = PI * r * r;
    printf("周长：%.3f\n", circumference);
    printf("面积：%.3f\n", area);
    return 0;
}
