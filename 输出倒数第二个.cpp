#include<stdio.h>

int main()
{
	int a,b,i=0;
	int qq[2];	

	while(scanf("%d",&a)!=EOF)
	{
		qq[0] = a;
		int b = scanf("%d",&b);
		if(b==EOF)
			break;
		
		qq[1] = b;
	}
	printf("%d",qq[0]);
}
