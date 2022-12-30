#include <stdio.h>

int main() {
	int x,a,b,c,f,g;
	scanf("%d",&g);
	x=100-g;
	
	a = x/20;
	b = (x-a*20)/10;
	c = (x-a*20-b*10)/5;
	f = (x-a*20-b*10-c*5);
	
	printf( "$20 bills: %d\n"
			"$10 bills: %d\n"
			" $5 bills: %d\n"
			" $1 bills: %d\n",a,b,c,f);
			
	return 0;
}
