#include<stdio.h>
#include<string.h>

int main() 
{
	int p,q,i,j;
	char s[21];
	scanf("%s",&s);
	scanf("%d %d",&p,&q);
	
	i = strlen(s);
	
	if(p<0)
		p =0;
	if(p>i||q<0)
	{ 
		printf("[]");
		return 0;
	}
	if(q>i)
		q = i;
	
	printf("[");
	for(j=p;j<=q;j++)
	{
		printf("%c",s[j]);
	}
	printf("]");
}
