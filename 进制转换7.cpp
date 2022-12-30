#include<stdio.h>
#include<string.h>
int main( ){
	char str[1000];
	unsigned long long b;
	
	while(scanf("%s",&str)!=EOF){
		int q;
		q = strlen(str)-1;
		unsigned long long sum=0,n=1;
		while(q>=0){
			sum = sum + (str[q]-'0')*n;
			n *= 2;
			q--;
		}
		printf("%llu\n",sum);
	}
	return 0;
} 
