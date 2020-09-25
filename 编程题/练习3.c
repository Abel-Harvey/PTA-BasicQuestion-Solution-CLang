// 练习3-2

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans = 0;
    if(n < 0) ans = -1;
    else if(n == 0) ans = 0;
    else ans = 1;
    printf("sign(%d) = %d\n",n,ans);
    return 0;
}





// 练习3-3

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("average = 0.0\ncount = 0\n");
        return 0;
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float sum = 0.0;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
        if(a[i] >= 60) count++;
    }
    printf("average = %.1f\ncount = %d\n",sum/n,count);
    return 0;
}





// 练习3-4

#include <stdio.h>
int main()
{
    int letter, blank, digit, other;
    letter=0, blank=0, digit=0, other=0;
    char a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(a[i] == ' ' || a[i] == '\n') blank++;
        else if(a[i] >='0' && a[i] <= '9') digit++;
        else if((a[i] >='a' && a[i] <= 'z') || (a[i]>='A' && a[i] <='Z')) letter++;
        else other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
    return 0;
}





// 练习3-5

#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int year)
{
    if((year % 4 == 0 && year%100 !=0) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}

int main()
{
    int year;
    scanf("%d",&year);
    if(year <= 2000 || year >2100) {
        printf("Invalid year!\n");
        return 0;
    }
    else if(year < 2004)
    {
        printf("None\n");
        return 0;
    } else
    {
        for(int i=2004;i<=year;i++)
        {
            if(isLeapYear(i) == true)printf("%d\n",i);
        }
        return 0;
    }
}





// 练习3-7

#include <stdio.h>
int main()
{
    int score;
    char level = 'E';
    scanf("%d",&score);
    if(score>=90) level='A';
    else if(score>=80 && score <90) level='B';
    else if(score>=70 && score <80) level='C';
    else if(score>=60 && score <70) level='D';
    else ;
    printf("%c",level);
    return 0;
}





// 练习3-8

#include <stdio.h>
int main()
{
    printf("[1] apple\n"
           "[2] pear\n"
           "[3] orange\n"
           "[4] grape\n"
           "[0] exit\n");
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i] == 0)break;
        else if(a[i] >4 || a[i] < 0)printf("price = 0.00\n");
        else
        {
            if(a[i] == 1) printf("price = 3.00\n");
            else if(a[i] == 2) printf("price = 2.50\n");
            else if(a[i] == 3) printf("price = 4.10\n");
            else printf("price = 10.20\n");
        }
    }
    return 0;
}
