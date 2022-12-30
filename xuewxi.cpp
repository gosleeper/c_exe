#include<stdio.h>
#include<string.h>
int main()
{
	int s0[2000]={0},j = 1,i,a0,M,N,l=0,s1[2000]={0},a1,amax;
	scanf("%d",&M);
	scanf("%d",&N);
	a0 = N;
	for(i=0;i<N;i++)
	{
		scanf("%d",&s0[i]);
	}
	while(j<M)
	{
		for(i=0;i<2000;i++)
		{
			s1[i] =0;
		}
		scanf("%d",&N);
		a1 = N;
		if(a1<a0)
			amax = a0;
		else
			amax = a1;
		for(i = 0;i<N;i++)
		{
			scanf("%d",&s1[i]);
		}
		for(i = 0;i<amax;i++)
		{
			if(i==0)
				printf("%d",s1[i]+s0[i]);
			else
				printf(" %d",s1[i]+s0[i]);
		}
		printf("\n");
		memcpy(s0,s1,2000*sizeof(int));
		a0 =  a1;
		j++;
	}
	for(i=0;i<a0;i++)
	{
		if(M==1)
			s1[i] = s0[i];
		if(i==0)
			printf("%d",s1[i]);
		else
			printf(" %d",s1[i]);
	}
	
	return 0;
}
