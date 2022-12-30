#include<stdio.h>

int main()
{
	int i, j, N;
	scanf("%d",&N);//判断1—N和输入之间重叠关系 
	int k= 0,s,m;
	int p[N];
	
	for(k=0;k<N;k++)
	{
		scanf("%d",&s);
		p[k]= s;
	}
	while(scanf("%d %d",&i,&j)!=EOF)
	{	m = 0;
		if(i>j)
		{
			s = j;
			j = i;
			i = s;
		}
		if(i>N||j<1)
		{
			printf("OUT OF RANGE\n");
			continue ;
		}else
		for(; i<=j;i++){
			if(i>N)
				break ;
			if(m==0&&i>=1&&i<=N){
				printf("%d",p[i-1]);
				m = 1;
				continue ;
			}
			if(m==1&&i>=1&&i<=N){
				printf(" %d",p[i-1]);
			}
		}
		printf("\n");
	}
}




















