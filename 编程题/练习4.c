// 练习4-3

#include <stdio.h>
#include <math.h>
int main()
{
    double eps;
    scanf("%lf",&eps);
    long double sum = 1.0;
    double count = 4.0;
    int i=2;
    while (1.0/count >= eps)
    {
        sum += (pow(-1,i+1)*1.0/count);
        count+=3;
        i++;
    }
    printf("sum = %.6Lf\n",sum);
    return 0;
}





// 练习4-6

#include <stdio.h>
int main()
{
    int rand, limit;
    scanf("%d %d",&rand,&limit);
    int num;
    scanf("%d",&num);
    int count = 0;
    int flag = 0;
    while (count <= limit)
    {
        if(num < 0)
        {
            flag = -1;
            break;
        }
        if(num > rand){
            printf("Too big\n");
            count++;
            scanf("%d",&num);
        }
        else if (num < rand){
            printf("Too small\n");
            count++;
            scanf("%d",&num);
        } else {
            flag = 1;
            count++;
            break;
        }
    }

    if(flag == -1 || count > limit) printf("Game Over\n");
    else if(flag == 1 && count == 1) printf("Bingo!\n");
    else if(flag == 1 && count <=3) printf("Lucky You!\n");
    else printf("Good Guess!\n");
    return 0;
}





// 练习4-7

#include <stdio.h>
double fact(int n)
{
    if(n<2)return 1;
    return fact(n-1)*n;
}
int main()
{
    double e;
    int n;
    scanf("%d",&n);
    e = 1.0;
    for(int i=1;i<=n;i++)
    {
        e += 1.0/fact(i);
    }
    printf("%.8lf\n",e);
    return 0;
}





// 练习4-10

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],min;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    min = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i] < min) min=a[i];
    }
    printf("min = %d\n",min);
    return 0;
}





// 练习4-11

#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    int flag=1;
    if(n==1) flag=0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n % i == 0) flag=0;
        }
    }
    return flag;
}
int main()
{
    int M,N;
    int cnt=0;
    int sum=0;
    scanf("%d %d",&M,&N);
    for(int i=M;i<=N;i++){
        if(isPrime(i)){
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d\n",cnt,sum);
    return 0;
}
