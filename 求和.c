#include<stdio.h>

int main() {
    int a,sum=0,i=0,b;
    scanf("%d",&a);//输入的第一个值是循环次数i，然后就在输入，考虑的是计算过程，出现保留了小数位，那就是实数型的运算
    double t;

    while(i<a){
        i++;
        scanf("%d",&b);
        sum += b;
    }
    t = sum*1.0/1.0*a;//这个程序走到这为什么会出错误，错误的原因是我将那个1.0放在了/后面
    printf("%.3f",t);
}

