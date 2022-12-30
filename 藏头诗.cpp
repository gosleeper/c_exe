#include<stdio.h>
#include<string.h>

int main()
{
	int T,N,t,n;
	char qq[2000],ww[200];
	
	scanf("%d %d",&T,&N);
	t=0;
	n=0;
	getchar();
	while(t<T)
	{
		while(n<N)
		{
			gets(qq);
			ww[n] = qq[0];
			n++;
		}
		ww[n] = '\0';
		printf("%s",ww);
		t++;
	}
		
} 
