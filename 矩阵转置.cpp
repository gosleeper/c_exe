#include<stdio.h>

int main()
{
	int M,m,n,i0=0,j,i;
	scanf("%d",&M);
	
	while(i0<M)
	{
		scanf("%d %d",&m,&n);
		int qq[m][n];//这样做是为了考虑到数组的作用域的问题，可以在下一次自动清除重开 
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{ 
				scanf("%d",&qq[i][j]); 
			}//遍历按行循环输入 
		
		for(j=0;j<n;j++)//按列遍历输出 
			for(i=0;i<m;i++)
			{
				if(i==0)//笑话了，一定要记得等号 
					printf("%d",qq[i][j]);
				else
					printf(" %d",qq[i][j]);
				if(i==(m-1))
					printf("\n");
			}
		if(i0!=(M-1))
			printf("\n");
		i0++;
	}
}
