#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int *p;
	p = (int*)malloc(3);
	
	for(int i = 0;i<4;i++)
	{
		p[i]=i;
	}
	printf("%d",p[4]);
}//��̬�����ʹ���ǿ��Գ����㶨�Ƶ��޶ȣ�һ��������Ǳ�����������Ĵ�С 
