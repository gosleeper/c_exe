#include<stdio.h>

int add(int n){
    int a,b;
    if(n!=0){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    if(n==0)
        return 0;
    return add(n-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}
