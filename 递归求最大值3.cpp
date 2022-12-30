#include<stdio.h>
int b=0,i=0;
void qq(){	
	int a;
	char e;
	scanf("%d",&a);
	i++;
	e = getchar();
	if(a>b)
		b=a;
	if(e='\0')
		return ;
	qq();
}

int main() {
	qq();
	printf("%d %d",i,b);
}
