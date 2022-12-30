#include<stdio.h>
#include<math.h> 
int main()
{
	int N,i,k,c;
	scanf("%d",&N);
	int p[N];
	i = 0;
	c = 0;
	while(i<N)
	{
		scanf("%d",&k);
		p[i] = k;
		i++;
	}
	while(scanf("%d",&k)!=EOF)
	{	c= 0;
		for(i=0;i<N;i++)
		{
			if(p[i]==k&&c==0)
			{
				printf("%d",i+1);
				c=1;
				continue ;
			}
			if(c==1&&p[i]==k)
			{
				printf(" %d",i+1);
			}
			
		}
		if(i==N&&c==1)
			printf("\n");
		if(c==0)
		{
			printf("NOT FOUND\n");
		}
}
	}
	
