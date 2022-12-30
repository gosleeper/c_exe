#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d",&n);
	m =n;
	int  qq[n][m];
	
	int i=0,j=0;
	
	for(i=0; i<n;i++)
		for(j=0 ; j<m;j++)
		{
			scanf("%d",&qq[i][j]);
		}
	int sum =0,a,b,c,d;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		sum =0;
		for(i=a;i<=c;i++)
			for(j=b;j<=d;j++)
			{
				sum += qq[i][j];
			}
		
		printf("%d\n",sum);
	}
}
