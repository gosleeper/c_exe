#include<stdio.h>

int main()
{
	int a1,a2,a3,i=0,n=0;
	while(1)
	{
		int c = scanf("%d",&a3);
		if(c==EOF)
		{
			printf("%d",a1);
			return 0;
		} 
		if(n==0)
		{
			n++;
			a1 = a3;
			i = 2;
		} else if(i==2)
		{
			a2 = a3;
			i = 3;
		}else if(i==3)
		{
			a1 = a2;
			a2 = a3;	
		} 		
	}
	return 0;
}
