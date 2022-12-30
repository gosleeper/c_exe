#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,j,m,n,m0,n0,sum,j0,i0,*w,*q;
	int qq[100][100],ww[100][100],ee[100][100];
	//ee储存qq和ww乘法的结果，ww负责每次的刷新任务，qq可以储存上一次的结果 
	scanf("%d %d",&m,&n);
	m0 = m;
	n0 = n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&ee[i][j]);//矩阵的输入储存 
	
	while(1)
	{
		for(i=0;i<100;i++)
			for(j=0;j<100;j++)
			{
				qq[i][j] = ee[i][j];
				ee[i][j] = 0;//完成矩阵交换和清0 
			 } 
		scanf("%d %d",&m,&n);
		if(m==0&&n==0)
			return 0;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&ww[i][j]);//矩阵的输入储存 
		if(n0!=m)
			{
				memcpy(&ee[0][0],&ww[0][0],sizeof(int)*100*100);//完成循环前的复制 
				printf("Not satisfied the definition of matrix multiplication!\n");
				printf("\n"); 
				m0 = m;
				n0 = n;
				continue ;
			}
		else//矩阵乘法 
			{
				int a=0;//确保在输入矩阵的m和n之间。 
				for(i=0;i<m0;i++)
					for(j=0;j<n;j++)
					{
						for(a=0;a<n0;a++)
						{
							ee[i][j] += qq[i][a]*ww[a][j];
						}
					}
				for(i=0;i<m0;i++)
					for(j=0;j<n;j++)
					{
						if(j==0)
							printf("%d",ee[i][j]);
						else
							printf(" %d",ee[i][j]);
						if(j==n-1)
							printf("\n");
					}
					printf("\n"); 
			}
			m0 = m0;
			n0 = n;
	}					
}
