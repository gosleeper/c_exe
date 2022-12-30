#include<stdio.h>


int main()  {
	int a;
	scanf("%d",&a);
	int p[a];//为什么不初始化就是对的 
	int i= 0;
	int b,c;
	c = a;
	while(i<a){
		scanf("%d",&b);
		p[i]=b;
		i++;
	}
	i = 0;
	while(scanf("%d",&b)!=EOF)
	{ 
		a = c;
		for(a -= 1;i<=a;a--)
		{
			if(p[a]==b)
			{
				printf("%d\n",a+1);
				break;
			}
		}
		if(a==-1)
		{
			printf("NOT FOUND\n");
		}
	}
	return 0;
}
