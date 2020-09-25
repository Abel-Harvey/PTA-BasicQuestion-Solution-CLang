// 习题3-1

#include <stdio.h>
int main()
{
    int a,b,c;
    int t;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){t=a,a=b,b=t;}
    if(a>c){t=a,a=c,c=t;}
    if(b>c){t=b,b=c,c=t;}
    printf("%d->%d->%d\n",a,b,c);
    return 0;
}





// 习题3-2

#include <stdio.h>
int main()
{
    int speed, limit;
    scanf("%d %d",&speed,&limit);
    int flag;
    double rate = 1.0*(speed-limit)/limit;
    if(rate < 0.1) flag = 1;
    else if(rate>=0.1 && rate<0.5) flag = 2;
    else flag =3;
    rate *= 100;
    switch (flag) {
        case 1:printf("OK\n");
        break;
        case 2:printf("Exceed %.0f%%. Ticket 200\n",rate);
            break;
        default:
            printf("Exceed %.0f%%. License Revoked\n",rate);
            break;
    }
    return 0;
}





// 习题3-3

#include <stdio.h>

int main()
{
    float km;
    int min;
    scanf("%f %d",&km,&min);
    float sum = 0.0;
    if(min>=5){
        sum += (min/5)*2;
    }
    if(km <= 3) sum+=10;
    else if(km >3 && km<=10)  sum+=(10+2*(km-3));
    else sum += (24+(km-10)*3);
    printf("%.0f\n",sum);
    return 0;
}





// 习题3-4

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int a,b,c,d,e;
    a=b=c=d=e=0;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= 90) a++;
        else if(arr[i] >= 80) b++;
        else if(arr[i] >= 70) c++;
        else if(arr[i] >= 60) d++;
        else e++;
    }
    printf("%d %d %d %d %d\n",a,b,c,d,e);
    return 0;
}





// 习题3-5

#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    int flag = 1;
    double ab,ac,bc;
    ab = sqrtf((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    ac = sqrtf((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    bc = sqrtf((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
    if(ab + ac <= bc || ab + bc <= ac || ac + bc <= ab)flag = 0;
    else flag = 1;
    if(flag)
    {
        double c,s;
        s = 1.0/2*(ab+ac+bc);
        c = ab+ac+bc;
        s = sqrt(s*(s-ab)*(s-ac)*(s-bc));
        printf("L = %.2lf, A = %.2lf\n",c,s);
        return 0;
    }
    else printf("Impossible\n");
    return 0;
}

