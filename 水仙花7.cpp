#include<stdio.h>
int is_daffodil(int n){
	int a,b,c,t;
	if(n>=100&&n<=999){
	t = n;
	a = n%10;
	n = n/10;
	b = n%10;
	c = n/10;
	if(a*a*a+b*b*b+c*c*c==t){ 
		return 1;
		} 
	else
		return 0;
	}
	else
		return 0;
} 

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
