// 练习2-1

#include <stdio.h>
int main()
{
    printf("Programming in C is fun!\n");
    return 0;
}



// 练习2-3

#include <stdio.h>
int main()
{
    printf("* * * *\n");
    printf(" * * *\n");
    printf("  * *\n");
    printf("   *\n");
    return 0;
}



// 练习2-4

#include <stdio.h>
int main()
{
    int f = 150;
    int c = 5*(f-32)/9;
    printf("fahr = 150, celsius = %d\n",c);
    return 0;
}



// 练习2-6

#include <stdio.h>
int main()
{
    printf("height = 45.00\n");
    return 0;
}




//练习2-8

#include <stdio.h>
int main()
{
    int f;
    scanf("%d",&f);
    int c = 5*(f-32)/9;
    printf("Celsius = %d\n",c);
    return 0;
}




// 练习2-9

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    return 0;
}




// 练习2-10

#include <stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x!=0 && x!=0.0)
    {
        printf("f(%.1f) = %.1f\n",x,1.0/x);
    } else printf("f(0.0) = 0.0\n");
    return 0;
}




// 练习2-11

#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    if(x >= 0) printf("f(%.2lf) = %.2lf\n",x,pow(x,0.5));
    else printf("f(%.2lf) = %.2lf\n",x,pow(x+1,2)+2*x+1/x);
    return 0;
}




// 练习2-12

#include <stdio.h>
int main()
{
    int low,upp;
    scanf("%d %d",&low,&upp);
    if(low > upp)
    {
        printf("Invalid.\n");
    }
    else
    {
        printf("fahr celsius\n");
        for(int i = low;i<=upp;i+=2)
        {
            printf("%d%6.1f\n",i,5*(i-32)/9.0);
        }
    }
    return 0;
}




// 练习2-13

#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    double sum = 0.0;
    for(int i=1;i<=x;i++)
    {
        sum += 1.0/i;
    }
    printf("sum = %.6lf\n",sum);
    return 0;
}




// 练习2-14

#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    double sum = 0.0;
    int count = 1;
    for(int i=1;i<=x;i++)
    {
        sum += 1.0/count;
        count+=2;
    }
    printf("sum = %.6lf\n",sum);
    return 0;
}




// 练习2-15

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum = 0.0;
    int count = 1;
    for(int i=1;i<=n;i++)
    {
        sum = sum + (pow(-1,i+1)*(1.0/count));
        count += 3;
    }
    printf("sum = %.3f\n",sum);
    return 0;
}




// 练习2-17

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("pow(3,%d) = %lld\n",i,(long long)powl(3.0,i));
    }
    return 0;
}




// 练习2-18

#include <stdio.h>
double fact(int n)
{
    if(n < 2) return 1;
    return fact(n-1)*n;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    double ans = 0.0;
    ans = fact(n)/(fact(m) * fact(n-m));
    printf("result = %lld\n",(long long)ans);
    return 0;
}