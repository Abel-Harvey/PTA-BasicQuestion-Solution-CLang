// 习题4.1

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    while (scanf("%d",&n) == 1)
    {
        if(n <= 0) break;
        if(n % 2 != 0) sum += n;
        else continue;
    }
    printf("%d\n",sum);
    return 0;
}


// 习题4.2

#include <stdio.h>
#include <math.h>
double fact(int i)
{
    if(i < 2)return 1;
    return fact(i-1)*i;
}
int main()
{
    double x;
    double temp;
    scanf("%lf",&x);
    double sum = 1.0;
    int i=1;
    while (1)
    {
        temp = pow(x,i)/fact(i);
        sum += temp;
        if(temp < 0.00001)break;
        i++;
    }
    printf("%.4f\n",sum);
    return 0;
}


// 习题4.3

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double upp=2.0,low=1.0,temp=0;
    double sum=0.0;
    for(int i=1;i<=n;i++)
    {
        sum += upp/low;
        temp = upp;
        upp += low;
        low = temp;
    }
    printf("%.2lf\n",sum);
    return 0;
}

