#include <stdio.h>

int main () {
	int a, b, c;
	a = getchar ();
	b = getchar ();
	c = getchar ();
	
	printf("%03d %03o %03x\n",a,a,a);
	printf("%03d %03o %03x\n",b,b,b);
	printf("%03d %03o %03x\n",c,c,c);
	
	return 0;
}
