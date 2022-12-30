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
}//动态数组的使用是可以超过你定制的限度，一般情况他是倍数扩大数组的大小 
