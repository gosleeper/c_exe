#include<stdio.h>

int main(){
	int one[15];
	
	int i=0,a,b;
	int n= -2147483648;
	
	while(i<15)
	{
		scanf("%d",&one[i]);
		i++;
	}
	a = one[0];
	for(i=1;i<15;i++)
	{
		if(one[i]>a)
		{
			a = one[i];
		}
	}
	for(i=0;i<15;i++)
	{
		if(one[i]==a)
		{
			b = i;
			break;
		}
	}
	
	for(i=0;i<15;i++)
	{
		if(i==b)
		{
			continue;
		}
		if(one[i]>n)
		{
			n = one[i];
		}
	}
	printf("%d",n);
} 
