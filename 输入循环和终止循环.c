#include <stdio.h>


int main() {
    int a, b;
    while (1){
        scanf("%d %d",&a,&b);//��һ�е���������������Ӱ����ô���,�ڼ�������г����ǰ����̽��еģ�ѭ���������������ֵ����֮��ѭ��������������ƵĲ���
        if (scanf("%d %d",&a,&b) == EOF)
            break;
        else
            printf("%d\n",a+b);
    }
    return 0;
}
