#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int c,i,N0,N1,d;
	
	
	while(1)
	{
		int s[1000] = {0};
		int s1[1000] = {0};
		c = scanf("%d",&N0);//接受eof为c； 
		if(c==EOF)//判断结束 
		{
			return 0;
		}
		
		for(i = 0;i<N0;i++)
		{
			scanf("%d",&s[i]);
		}
		
		c = scanf("%d",&N1);
		if(c==EOF)//判断结束 
		{
			if(N0==0)
			{
				printf("\n");
				return 0;
			}
			printf("%d",s[0]);
			for(i=1;i<N0;i++)
			{
				printf(" %d",s[i]);
			}
			printf("\n");
			return 0;
		}
		
		for(i =0;i<N1;i++)
		{
			scanf("%d",&s1[i]);
		}
		
		for(i=0;i<=N0&&i<=N1;i++)
		{
			if(i==N0)
			{
				d = N1;
				for( ;i<N1;i++)
				{
					s[i] = s1[i];
				}
			}else if(i==N1)
			{
				d = N0;
				for(;i<N0;i++)
				{
					s[i] = s[i];
				}
			}else
			s[i] = s[i] + s1[i];
		}
		if(N0==0&&N1==0)
		{
			printf("\n");
		}else
		{
		 	printf("%d",s[0]);
			for(i=1;i<d;i++)
			{
				printf(" %d",s[i]);
			}
			printf("\n");
		}
	
	}  
}
/*要怎样我才能做到0的输入和换行的输出 */
