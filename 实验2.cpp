#include<stdio.h>
int sum=0;
int a=0,b=0,c,d=0;
int j(int m,int n)
{
    if(m==0&&n==0)
        {return 0;}
        a=m%10;
        b=n%10;
        c=d+a+b;
    if(c>=10)
    {
        sum++;
        d=1;
    }
    else{d=0;}
    int x,y;
    x=m/10;
    y=n/10;
    j(x,y);
}
int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        j(m,n);
    printf("%d\n",sum);
    sum=0;
    d=0;
    }

    return 0;
}

