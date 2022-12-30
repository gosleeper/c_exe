#include <stdio.h>

int main() {
	int a, b, c, x;
	scanf("%d",&x);
	a = x /100;
	b = (x /10) -(10*a);
	c = x -x/10*10;
	
	if (a*a*a+b*b*b+c*c*c==x)
		printf("YES");
	else
		printf("NO");
		
	return 0;
}
