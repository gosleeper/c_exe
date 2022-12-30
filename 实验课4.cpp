#include<stdio.h>

int digit(int n,int k){
	if(k==1){
		return n = n%10;
	}
	n = n/10;
	k--;
	digit(n,k);
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", digit(n, k));
}
