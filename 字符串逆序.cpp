#include<stdio.h>
#include<string.h>

int main()
{
	char qq[200];
	scanf("%s",qq);
	int a = strlen(qq);
	a--;
	for( ; a>=0;a--)
	{
		printf("%c",qq[a]);	
	}	
} 
