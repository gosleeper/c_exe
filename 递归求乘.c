#include<stdio.h>

int cj(int a, int b){
    int C;
    int c = 0;

    if(a==0||b==0)
        return 0;
    if(a>0&&b>0)
        return a==1 ? b : cj(a-1,b)+b;
    if(a>0&&b<0)
        return a==1 ? b : cj(a-1,b)+b;
    if(a<0&&b>0)
        return b==1 ? a : cj(b-1,a)+a;
    if(a<0&&b<0)
        return (-1*a==1 ? b : cj(-1*a-1,b)+b)*-1;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d",cj(a,b));

    return 0;
}
