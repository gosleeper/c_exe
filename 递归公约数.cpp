#include<stdio.h>

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
    int i = 2;
    if(m%n!=0){
        m = m*i;
        i++;
        gbs(m,n);
    }
    else
        return m;

}
int main() {
    int m, n;
    scanf("%d %d",&m,&n);

    printf("%d %d",1,gys(m,n));
}

