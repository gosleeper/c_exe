#include<stdio.h>
int gcd(int a,int b){
     if(a==0&&b!=0)
        return b;
    else if(a!=0&&b==0)
        return a;


    while(a!=0&&b!=0){
    if(a<=b){
        b = b%a;
    }else{
        a = a%b;
    }
    }
    if(a!=0)
        return a;
    else
        return b;
}

int lcm(int a, int b){
    int i,c;
    if(a==0||b==0)
        return 0;
    else{
        c = a;
        for(i = 2 ;a %b != 0;i++)
            a = c * i;
        return a;
    }
}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n",gcd(a,b),lcm(a, b));
    return 0;
}
