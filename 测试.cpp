#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int N;
	char *s[50001];
	char w[100001];
	char *Q,*e; 
	int i=0,d=1;
	scanf("%d",&N);/*��Ҫ��ʲô��
	�ȴ��棬��ô����
	ÿһ��ѭ����Ҫ����һ���ռ䷵�ص�ַ������ռ����������ַ�����*/ 
	
	for(i=0;i<N;i++)
	{
		e= (char*)malloc(sizeof(char)*10);
		scanf("%s",e);
		s[i] = e;
	}
	printf("%s\n",s[1]);
	
}
	
