#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d:%d",&a,&b);
	
	if(a>=1&&a<11)
	{
		printf("%02d:%02d a.m.",a,b);
		return 0;
	}
	if(a==12)
	{
		printf("12:%02d p.m.",b); 
		return 0;
	}
	if(a==0)
	{
		printf("12:%02d a.m.",b);	
		return 0;
	}	
	if(a>12&&a<24)
	{
		printf("%02d:%02d p.m.",a-12,b);
		return 0;
	}
	
}
