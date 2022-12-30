#include<stdio.h>

int tizi(int n){
	int m;
	n = n+1;
	if(n==0||n==1)
	{ 
		m = 0;
	} 
	else if(n==2)
	{
		m=1;
	}else if(n==3)
	{
		m=2;
	}else 
	{
		m = tizi(n-1)+tizi(n-2);
	}
	printf("%d\n",m);
	return 1;
}

void gotu(){
	int b;
	if(scanf("%d",&b)!=EOF){
		tizi(b);
		
	}

}

int main() {
	int n=1;
	gotu();

	return 0;
}
