#include<stdio.h>


int main()  {
	int a;
	scanf("%d",&a);
	int p[a] = {0};//为什么不初始化就是对的 
	int i= 0;
	int b,c;

	while(i<a){
		scanf("%d",&b);
		p[i]=b;
		i++;
	}
	while(scanf("%d",&b)!=EOF)
	{
		for(i=0;i<a;i++)
		{
			if(p[i]==b)
			{
				printf("%d\n",i+1);
				break;
			}
		}
		if(i==a) 
		{
			printf("NOT FOUND\n");
		}
	}
	return 0;
}
