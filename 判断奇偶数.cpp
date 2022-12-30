#include<stdio.h>
#include<string.h>

int main()
{
	char qq[10002];
	
	while(scanf("%s",qq)!=EOF)
	{
		int len = strlen(qq);
		int c = qq[len-1];
		if(c%2==0)
		{
			printf("Even\n");
		}else
			printf("Odd\n");		
	}
	return 0;	
}
