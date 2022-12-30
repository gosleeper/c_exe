#include<stdio.h>
#include<string.h>

int main()
{
	char qq[9];
	
	while(scanf("%s",qq)!=EOF)
	{
		int n;
		if(qq[4]>='A'&&qq[4]<='Z')
		{
			n = 0;
		}else 
			n = qq[4];
		
		
		if(n==0)
		{
			printf("1 2 3 4 6 7\n");
		}else if(n==1)
		{
			printf("2 3 4 5 6 7\n");
		}else if(n==2)
		{
			printf("1 3 4 5 6 7\n");
		}else if(n==3)
		{
			printf("1 2 4 5 6 7\n");
		}else if(n==4)
		{
			printf("1 2 3 5 6 7\n");
		}
	}
	return 0;
}
