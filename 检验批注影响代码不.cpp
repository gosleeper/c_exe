#include <stdio.h>


int main ()  {
	int a;
	int b;
	
	scanf("%d %d", &a, &b);
	double change = (a + b / 12.0) * 0.3048;
	printf("ok=%f",change);
	
	return 0;  //���ʹ����˫б��Ҫ���ڴ�����棬�ü������Ϊ�����Ǵ�˫б�ܿ�ʼ�����һ�п�ʼ; 
	
}
