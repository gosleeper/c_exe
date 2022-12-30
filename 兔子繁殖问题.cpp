#include<stdio.h>

int main() {
	int p[100000];
	int n,i,a;
	scanf("%d",&n);
	int x[n];
	p[0] = 0;
	p[1] = 1;
	p[2] = 2;
	
	for(i=3;i<100000;i++){
		p[i] = p[i-1] +p[i-2];
	}
	for(a=0;a<n;a++){
		scanf("%d",&x[a]);
	}
	for(a=0;a<n;a++){
		int c = x[a]; 
		printf("%d\n",p[c]);
	}
}
