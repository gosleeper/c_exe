#include<stdio.h>

int fact(int n){
    if(n==1||n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int dg(int n,int k){
    int a, b, c;
    a = fact(n);
    b = fact(n-k);
    c = fact(k);


    return a/b/c;

}

#include <stdio.h>

int f(int m,int n)
{
    if(m<n) return 0;
    if(m==0) return 1;
    if(n==0) return 1;
    return f(m-1,n-1)+f(m-1,n);

}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",f(m,n));
}
