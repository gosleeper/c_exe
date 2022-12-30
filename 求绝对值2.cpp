#include  <stdio.h>

int main() {
	int a;
	double b;
	
	scanf("%d\n%lf",&a,&b);
	if (a>0)
		printf("%d\n",a);
	else
		printf("%d\n",-a);
	if (b>0)
		printf("%g\n",b);
	else
		printf("%g\n",-b);
		
	return 0;
}
