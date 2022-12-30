#include<stdio.h>

int digit(int n){
	if(n==0)
		return 0;
	if(n<10&&n>0){
		return n;
	}
	n = n/10;
	digit(n);	
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", digit(n));
}
