#include <stdio.h>

int main() {
    int a=1, b=1;
    while (1){
        if (a==0&&b==0)
            break;
        else{
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
        }
    }
    return 0;
}//错误点在于先scanf的那么下一个就是计算了，然后再循环再到break，所以0 0在这里并不表示结束，还要循环一下才是结束。





计算a+b，0<=a,b<1000。

Input
输入有多对整数a和b组成，每对a和b占一行，a,b用空格分开。当测试样为0 0时表示输入结束，0 0不参与运算。

Output
每行输出一个a+b的值，顺序与输入对应。

Sample Input
1 2
10 20
0 0
Sample Output
3
30
HINT
练习break的使用。

Append Code
