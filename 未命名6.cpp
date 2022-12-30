#include<stdio.h>

int main(){
	int M,N,i,a,b,c;
	scanf("%d",&M);

	while(M>0)
	{
		scanf("%d",&N);
		int one[N];
		int two[N];
		int i =0;
		while(i<N)
		{
			scanf("%d",&one[i]);
			i++;
		}
		int i0=0;
		two[i0] = one[0];
		for(i=1;i<N;i++)
		{
			if(one[i]>two[i0])
			{
				two[i0+1] = one[i];
				i0++;
			}	
		}
		a = i0;
		printf("%d",two[0]);
		for(i=1;i<=i0;i++)
		{
			printf(" %d",two[i]);
		}
		printf("\n");
		M--;
	}
}
