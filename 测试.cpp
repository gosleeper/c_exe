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
	scanf("%d",&N);/*我要干什么，
	先储存，怎么储存
	每一次循环都要申请一个空间返回地址，这个空间用来储存字符串，*/ 
	
	for(i=0;i<N;i++)
	{
		e= (char*)malloc(sizeof(char)*10);
		scanf("%s",e);
		s[i] = e;
	}
	printf("%s\n",s[1]);
	
}
	
