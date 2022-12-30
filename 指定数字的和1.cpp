#include<stdio.h>

int main() {
	int M, a, b, c, d, e;
	int i = 0, sum = 0;
	while(scanf("%d",&M) != EOF){
		while(i<=999){
			i++;
			printf("%d\n",i);
			printf("3");
			if(i = 1)
				a = M;
			M = i * a;
			if(M>=100){
				b = M % 10;
				e = M / 10;
				c = e % 10;
				d = e / 10;
				if(d != b && d!=c && c!=b)
					sum += M;
			}
			i++;
		}
		printf("%d\n",sum);	
}
	return 0;
}
