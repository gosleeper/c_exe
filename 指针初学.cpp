#include<stdio.h>
int get_int_sum(int *p1 ,int *p2)
{
	scanf("%d %d",p1,p2);
	return *p1+*p2;
}

int main()
{
    int n, a, b, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d = ", get_int_sum(&a, &b));
        printf("%d + %d\n", a, b);
 
    }
    return 0;
}

