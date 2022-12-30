#include <stdio.h>

int main() {
	double a, b, c, d, e, f;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if (a>b)
		if (b>c)
			f=a,e=b,d=c;
		else
			if(c>a)
				d=b,e=a,f=c;
			else
				d=b,e=c,f=a;
	else//b>a
		if(a>c)
			d=c ,e=a ,f=b ;	
		else//c>a
			if(c>b)
				d=a ,e=b ,f=c ;
			else//b>c
				d=a ,e=c ,f=b ;
	
	printf("%g %g %g",d,e,f);
	
	return 0;
}
