#include<stdio.h>

int digits(int n){
	int i,a,b;
	if(n<0){
		n = -1*n;
	}
	if(n==0){
		return 1;
	}else
	if(n>0){
		for(i=0;n!=0;i++){
			n = n/10;
		}
		return i;
	}
	
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}

