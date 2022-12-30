#include<stdio.h>

int main() {
	unsigned long long int N, P, Q, i,c;
	scanf("%llu",&N);
	i = 0;
	
	while(i<N){
		scanf("%llu %llu",&P,&Q);
		if(P>Q){
			c = Q;
			Q = P;
			P = c;
		}
		if(P==Q){
			printf("%llu\n\n",P);
			continue ;
		}
		for( ; P<Q;P++){
			printf("%llu ",P);
		}
		printf("%llu\n\n",Q);
		i++;
	}
}
