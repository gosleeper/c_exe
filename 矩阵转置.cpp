#include<stdio.h>

int main()
{
	int M,m,n,i0=0,j,i;
	scanf("%d",&M);
	
	while(i0<M)
	{
		scanf("%d %d",&m,&n);
		int qq[m][n];//��������Ϊ�˿��ǵ����������������⣬��������һ���Զ�����ؿ� 
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{ 
				scanf("%d",&qq[i][j]); 
			}//��������ѭ������ 
		
		for(j=0;j<n;j++)//���б������ 
			for(i=0;i<m;i++)
			{
				if(i==0)//Ц���ˣ�һ��Ҫ�ǵõȺ� 
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
