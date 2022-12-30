#include<stdio.h>
int digit_sum(int sum){
	while(sum>=10){
		int c = 0;
		while(sum>0){
			int d = sum%10;
			sum = sum/10;
			c += d;
		}
		sum = c;
}
	return sum;
} 
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",digit_sum(n));
	
	return 0;
} 
