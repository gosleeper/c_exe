#include<stdio.h>

int dg(int n, int k){
    if(k==1)
        return n;
    if(n==k)
        return 1;
    else
        return (dg(n-1,k-1)+dg(n-1,k));
}

int main() {
    int a, b, c;
    scanf("%d %d",&a,&b);

    if(a<b){
       printf("0");
    }
    else
        printf("%d",dg(a,b));

    return 0;
}
