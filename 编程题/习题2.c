// 习题2-1

#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int sum = a+b+c+d;
    float ave = sum*1.0/4;
    printf("Sum = %d; Average = %.1f\n",sum,ave);
    return 0;
}




// 习题2-2

#include <stdio.h>
int main() {
    int e;
    scanf("%d", &e);
    int flag = 0;
    float ans = 0.0;
    if (e < 0) {
        flag = 0;
    } else {
        flag = 1;
        if (e <= 50) ans = e * 0.53;
        else ans = 50 * 0.53 + (e - 50) * 0.58;
    }
    if (flag == 0) printf("Invalid Value!\n");
    else printf("cost = %.2f\n", ans);
    return 0;
}




// 习题2-3

#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    double sum = 0.0;
    for(int i=m;i<=n;i++)
    {
        sum += i*i;
    }
    for(int i = m;i<=n;i++)
    {
        sum += 1.0/(i);
    }
    printf("sum = %.6lf\n",sum);
    return 0;
}




// 习题2-4

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    double sum = 0.0;
    int count = 1;
    for(int i=1;i<=n;i++)
    {
        sum += pow(-1,i+1)*(i*1.0/count);
        count += 2;
    }
    printf("%.3lf\n",sum);
    return 0;
}




// 习题2-5

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    double sum = 0.0;
    for(int i=1;i<=n;i++)
    {
        sum += sqrt(i*1.0);
    }
    printf("sum = %.2lf\n",sum);
    return 0;
}




// 习题2-6

#include <stdio.h>
double fact(int n)
{
    if(n<2) return 1;
    return fact(n-1)*n;
}

int main()
{
    int n;
    scanf("%d",&n);
    double sum = 1.0;
    for(int i=2;i<=n;i++)
    {
        sum += fact(i);
    }
    printf("%lld\n",(long long)sum);
    return 0;
}
