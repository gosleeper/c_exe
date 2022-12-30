#include <stdio.h>

int main() {
	int N, i, j, sum,atm, M;
	j = 0;
	
	scanf("%d",&N);
	
	while ( j<=N ) {
		sum = 0;
		
		scanf("%d",&M);
		for(i=1;i<=M;i++){
		scanf("%d",&atm);
		sum += atm;
	}
		j++;
		printf("%d\n",sum);
		printf("\n");
	}
	return 0;
} 
