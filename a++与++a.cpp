#include <stdio.h>

int main () {
	int a = 10;
	
	printf("a++=%d\n",a++);  //����a++��ʾ������δ����ǰ��a��ֵ���������������ʽ�Ѿ�ȷ����ִ��a++; 
	printf("a=%d\n",a);    //��������һ�����ǿ��Կ��ĳ�����a�Ѿ�ӵ����11��ֵ; 
	
	printf("++a=%d\n",++a);
	printf("a=%d\n",a);
	return 0;
}
