#include<stdio.h>
int maxValue(int a,int b,int c){
	return a>b?(a>c?a:c):(b>c?b:c);
}

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", maxValue(x, y, z));
    return 0;
}
