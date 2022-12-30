#include<stdio.h>


int main()  {
	int a;
	scanf("%d",&a);
	int p[a] = {0};
	int i = 0;
	while(i<a)
	{
		printf("%d\n",p[i]);
		i++;
	}
	i -= 1;
	printf("%d",i);
	
	return 0;
}
