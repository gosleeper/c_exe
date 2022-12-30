#include<stdio.h>

int fact(int n){
    if(n==1||n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int main() {
    int a;
    scanf("%d",&a);

    printf("%d",fact(a));

    return 0;
}
