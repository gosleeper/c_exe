#include<stdio.h>
int main()
{
	int n;
	char a;
	scanf(",%d", &n);
	printf("%d", n);

	scanf("%c",&a);
	printf("%c",a);//不会被进入输入流。 
}

