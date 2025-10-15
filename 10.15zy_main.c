#include <stdio.h>

int main(void) {
    printf("************************\n");
    printf("very good!\n");
    printf("************************\n");
    return 0;
}




int main() {

    int a,b,sum,minus;
    a = 123;
    b = 456;
    sum = a + b;
    minus = a - b;
    printf("a+b=%d\n a-b=%d\n", sum,minus);
    return 0;

}



int main() {
    int a,b,c;
    a=3;
    c=1;
    printf:("%d\n"(a+b)*c);
    return 0;
}



#include <stdio.h>
define PI=3.14;

int main() {
    float r,area;
    printf("enter value:\n");
    scanf("%f",&r);
    area=PI*r*r;
    printf("area=%f\n",area);
    return 0;
}

#include <stdio.h>
int main( ){


      int x,y;
       x=5,y=8;
       printf("\n%d，%d，%d\n",x,(x+5)*2,y);
       return 0;
   }
// 少定义了一个变量y

// (五)
// 1
#include <stdio.h>

int main() {
    printf(" ****\n");
    printf("*\n");
    printf("*\n");
    printf("*\n");
    printf(" ****\n");
    return 0;
}


// 2
#include <stdio.h>

int main() {
    printf("    *\n");
    printf("  *   *\n");
    printf("*   *   *\n");
    return 0;
}

// 3
#include <stdio.h>

int main() {
    float a, b, c, max;
    printf("请输入三个数：");
    scanf("%f%f%f", &a, &b, &c);

    max = a;
    if (max<b) {
        max = b;
        if (max<c) {
            max = c;
            printf("max = %f\n", max);
        }
    }
    else if (max<c) {
        max = c;
        if (max<b) {
            max = b;
            printf("max = %f\n", max);
        }
    }
    else {
        printf("max = %f\n", max);
    }
    return 0;
}








