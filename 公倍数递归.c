#include<stdio.h>
int c;

int gys(int m, int n){
    int t;
    if(n>0){
        t = n;
        n = m%n;
        m = t;
    }
    else return m;
    gys(m,n);
}

int gbs(int m, int n){
    static int i = 2;

    if(m%n!=0){
        m = c*i;
        i++;
    }
    else
        return m;
    gbs(m,n);
}
int main() {
    int m, n;
    scanf("%d %d",&m,&n);
    c = m;

    printf("%d %d",gys(m,n),gbs(m,n));
}
