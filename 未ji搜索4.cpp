#include<stdio.h>
 
int main()
{
	int N,i,k,c;
	scanf("%d",&N);
	int p[N];
	i = 0;
	
	c = abs(-5);
	while(i<N)
	{
		scanf("%d",&k);
		p[i] = k;
		i++;
	}
	while(scanf("%d",&i)!=EOF)
	{
		c = i;
		if(c<0)//Ϊʲô˵��ʽ�����Ǵ���ġ���Main.c: In function 'main': Main.c:18: error: implicit declaration of function 'abs'
 			c = -1*c; 
		if(c>N)
		{
			printf("OUT OF RANGE\n");
		}else
		if(i>0)
		{
			printf("%d\n",p[i-1]);
		}else 
		if(i<0)
		{
			printf("%d\n",p[N+i]);
		}else
			printf("OUT OF RANGE\n");
	}
	return 0;
	
}
