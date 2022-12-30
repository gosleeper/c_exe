#include <stdio.h>


int main() {
    int a, b;
    while (1){
        scanf("%d %d",&a,&b);//这一行的输入对整个运算的影响怎么理解,在计算过程中程序是按流程进行的，循环过程是整个部分的语句之内循环。明白语句限制的部分
        if (scanf("%d %d",&a,&b) == EOF)
            break;
        else
            printf("%d\n",a+b);
    }
    return 0;
}
