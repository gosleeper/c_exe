#include <stdio.h>

int main() {
	int m, n, x;

	scanf("%d %d %d",&m,&n,&x);

	int a = m * x;

	if (a >= n)
        printf("%.2f",m*x*0.88);

    else
        printf("%.2f",m*x*1.0);

    return 0;
}
