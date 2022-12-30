#include <stdio.h>

int main() {
	int N, a, b,i;
	a=0;
	b=0;
	
	while ((scanf("%d",&N)) != EOF){
		for(i=1;i<=N;i++){
			scanf("%d",&a);
			b +=a;
		}
		printf("%d\n",b);	
	}
	return 0;
}
