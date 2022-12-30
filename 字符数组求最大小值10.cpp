#include<stdio.h>
#include<string.h>

int main() {
	char one[1009];
	char max[1009];
	char min[1009];
	int sum, i, n,a,b,cmin,cmax,a1;
	int jz = 1;
	int Q =0;
	while(scanf("%s",one)!=EOF)
	{
		n = strlen(one);
		i =0;
		while(1)
		{
			if(one[i]!='0')
			{
				a = i;//第一个数值的位置； 
				a1=i;
				break;
			}
			i++;
			if(i==n)
			{
				a = n-1;
				break ;	
			}
		}
		b = n-a;//b是数值长度， 
		if(Q ==0)
		{
			cmin =b;
			cmax =b;
			for(i=0;i<b;i++)
			{
				max[i] = one[a];
				min[i] = one[a];
				a++;
			}
			max[i]='\0';
			min[i]='\0';
		}//初始化，比较的基础 
		if(b>cmax)//判断会不会大于最大值 
		{
			cmax =b;
			for(i=0;i<b;i++)
			{
				max[i] = one[a];
				a++;
			}
			max[i]='\0';
		}
		if(b<cmin) 
		{
			cmin =b;
			for(i=0;i<b;i++)
			{
				min[i] = one[a];//比较出来之后就对数组在赋值改变。 
				a++;
			}
			min[i]='\0';
		}
		if(b==cmin&&Q!=0)
		{
			for(i=0;i<b;i++)
			{
				if(one[a]<min[i])
				{
					for(i=0;i<b;i++)
					{
						min[i] = one[a1];//比较出来之后就对数组在赋值改变。 
						a1++;
					}
					min[i]='\0';
					break ;
				}else 
				if(one[a]>min[i])
				{
					break ;
				}else 
				if(one[a]==min[i]) ;
				a++;
			}
			
		}
		if(b==cmax&&Q!=0)
		{
			for(i=0;i<b;i++)
			{
				if(one[a]>max[i])
				{
					for(i=0;i<b;i++)
					{
						max[i] = one[a1];//比较出来之后就对数组在赋值改变。 
						a1++;
					}
					max[i]='\0';
					break ;
				}else 
				if(one[a]<max[i])
				{
					break ;
				}else 
				if(one[a]==max[i]) ;
				a++;
			}
		}
		
		Q++;
	}		
	printf("The maximum value is : %s\n",max);
	printf("The minimum value is : %s",min);
	return 0;	
}
