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
}//�����������scanf����ô��һ�����Ǽ����ˣ�Ȼ����ѭ���ٵ�break������0 0�����ﲢ����ʾ��������Ҫѭ��һ�²��ǽ�����





����a+b��0<=a,b<1000��

Input
�����ж������a��b��ɣ�ÿ��a��bռһ�У�a,b�ÿո�ֿ�����������Ϊ0 0ʱ��ʾ���������0 0���������㡣

Output
ÿ�����һ��a+b��ֵ��˳���������Ӧ��

Sample Input
1 2
10 20
0 0
Sample Output
3
30
HINT
��ϰbreak��ʹ�á�

Append Code
