#include<stdio.h>
//通过辅助计算我们发现规律；471+（n-1）*1000； 
int main() {
	unsigned long long a,b,c, n=1;
	 n=1; 
	while(scanf("%llu",&n)!=EOF){
		if(n!=1)
		printf("%llu471\n",n-1);
		if(n==1)
		printf("471\n");                           //如果用乘法就要考虑范围是不是超过了 
	}
}

