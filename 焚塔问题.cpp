#include<stdio.h>

void fenta(int n,int a,int b,int c){
	if(n==1){
		printf("   plate %d : from %d to %d\n",n,a,c);
	}
	else{
		fenta(n-1,a,c,b); 
		printf("   plate %d : from %d to %d\n",n,a,c);
		fenta(n-1,b,a,c);
	}
}

int main() {
	int n,a,b,c;
	int i=1;
	while(scanf("%d %d %d %d",&n,&a,&b,&c) != EOF){
		printf("case %d :\n",i);
		fenta(n,a,b,c);
		i++;
	}
	return 0;
}
