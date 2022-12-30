#include<stdio.h>
#include<string.h>

int main()
{
	char qq[30009];
	char ww[30009];
	char ee[30009];
	
	scanf("%s",qq);
	getchar(); 
	while(scanf("%s",ww)!=EOF)
	{
		int a=0,b=0,c=0,d=0,i =0;
		int n0= strlen(qq);
		int n1 = strlen(ww);
		
		for( a=0;a<n0;a++)
		{
			for(b=0;b<n1;b++)
			{
				if(qq[a]==ww[b])
				{
					break ;
				}else if(b!=n1-1) 
				{
					continue ;
				}else
				{
					ee[i] = qq[a];
					i++;
				}
			}
		}
		qq[i] = '\0';
		puts(qq);
	}
}






