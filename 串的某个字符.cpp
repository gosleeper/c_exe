#include<stdio.h>
#include<string.h>

int main()
{
	int k;
	char qq[20];
	
	scanf("%s %d",qq,&k);
	int a = strlen(qq);
	if(k<=a)
	{
		printf("%c",qq[k-1]);
	}else
		printf("error");
	return 0;
		
} 
