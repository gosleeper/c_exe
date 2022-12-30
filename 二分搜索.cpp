#include<stdio.h>

int main() 
{
	int N,i = 0,k;
	scanf("%d",&N);
	int one[N];
	
	while(i<N)
	{
		scanf("%d",&one[i]);
		i++;
	}
	scanf("%d",&k);
	
	int left=0;
	int right = N-1;
	
	while(right>left)
	{
		int mid = (right+left)/2;
		if(one[mid]==k)
		{
			printf("%d",k);
			return 0;
		} else if(one[mid]>k)
		{
			right = mid - 1;
		} else {
			left = mid + 1;
		}
		
	}
	return 0;
} 
