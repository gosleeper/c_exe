#include<stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	int p[a];
	int i = 0;
	int b;
	
	while(i<a){
		scanf("%d",&b);
		p[i] = b;
		i++;
		
	}
	while(scanf("%d",&b)!=EOF){
		if(b>=1&&b<=(a+1))
			printf("%d\n",p[b-1]);
		else
			printf("OUT OF RANGE\n");
	}
	return 0;
} 
