#include<stdio.h>

int main()
{
	int m,n;
	
	while(1)
	{
		scanf("%d %d",&m,&n);
		if(m==0&&n==0)
			return 0;
		int qq[m][n],i,j,m0,n0;
		m0 =m;
		n0 =n;
		
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&qq[i][j]);
			}//第一次输入储存 
		
		scanf("%d %d",&m,&n);
		if(m==0&&n==0)
			return 0;
		int ww[m][n];
		
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&ww[i][j]);
			}//第二次输入储存 
		for(i=0;i<m;i++)//判断相加是否，并且求和 
		{
			if(m!=m0||n!=n0)
				{
					printf("Not satisfied the definition of matrix addition!\n");
					break;
				}
			for(j=0;j<n;j++)
			{
				if(1)
				{
					for(i=0;i<m;i++)
						for(j=0;j<n;j++)
						{
							if(j==0)
								printf("%d",qq[i][j]+ww[i][j]);
							else
								printf(" %d",qq[i][j]+ww[i][j]);
							if(j==(n-1))
								printf("\n");
						}	
				}	
			}
		}
			printf("\n"); 
	}
}
