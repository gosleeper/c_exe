#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	
	int one[n];
	i = n-1;
	while(i>=0)
	{
		scanf("%d",&one[i]);
		i--;
	}
	i = 0;
	printf("%d",one[i]);
	i++;
	while(i<n)
	{
		printf(" %d",one[i]);
		i++;
	}
	return 0;
}
