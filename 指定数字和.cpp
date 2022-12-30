#include<stdio.h>

int main() {
	int M, a, b, c, d, e;
	int i = 1, sum = 0, o = 1;
	while(scanf("%d",&M) != EOF){
			sum = 0;
			i = 1;
		while(M<=999){
			if(i == 1)
				a = M;
			M = i * a;
			if(M>=100 && M<=999){
				b = M % 10;
				e = M / 10;
				c = e % 10;
				d = e / 10;
				if(d != b && d!=c && c!=b)
					sum += M;
			}
			i++;
		}
		printf("case %d:%d\n",o,sum);
		o++;	
}
	return 0;
}
