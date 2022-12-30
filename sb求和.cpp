#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUM 1001

int main()
{
	int N,M,i = 0;
	scanf("%d",&M);
	
	while(i<M)
	{
		int s0[NUM] = {0};
		int s1[NUM] = {0};
		int t =0,len0,len1,d;
		
		while(1)
		{
			scanf("%d",&s0[t]);
			if(s0[t]==0)
			{
				len0 = ++t;
				break;//完成输入的储存 
			}
			t++;
		}
		
		while(1)
		{
			int a = M%2;
			if(a==1&&i==(M-1))
			{
				printf("%d",s0[0]);
				for(t = 1;t<len0;t++)
				{
					printf(" %d",s0[t]);
				}
				return 0;//奇数单独输出 
			}
			scanf("%d",s1[t]);
			if(s1[t]==0)
			{
				len1 = ++t;
				break ;
			}
		}
		for(t = 0;t<=len0&&t<=len1;t++)
		{
			s0[t] = s0[t] + s1[t];
			
			if(len0==t)
			{
				d = len1;
				for( ;t<len1;t++)
					s0[t] = s1[t];
			}else
			if(len1==t)
			{
				d = len0;
				for( ;t<len0;t++)
					s0[t] = s0[t];
			}
		}
		if(s0[0]==0&&s1[0]==0)
		{
			printf("\n");
		}
		printf("%d",s0[0]);
		for(t =1;t<d;t++)
		{
		 	printf(" %d",s0[t]);	
		}
		printf("\n"); 
		i++;
	}
}
//如果是0 
