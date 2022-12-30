#include <stdio.h>

int main() {
	int k, m, n, k1;
	
	scanf("%d %d %d",&k,&m,&n);
	printf("%d",m);
	k1 = m +1;
	
	while(k1 <= k){
		if (k1 % m == 0&&k1 % n == 0)
			      ;
		else
			if(k1 % m == 0||k1 % n == 0)
			printf(" %d",k1);
		k1++;
	} 
	return 0;
} 
