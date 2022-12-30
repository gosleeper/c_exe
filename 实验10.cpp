#include<stdio.h>

int qq(int a){
	static int i =1;
	if(a>=0&&a<10){
		return i;
	}
	a = a/10;
	i++;
	qq(a); 
}

int digit(int n,int k){
	if(k==1){
		return n = n%10;
	}
	n = n/10;
	k--;
	digit(n,k);
}
 
int main(){
	int n,k,a;
	scanf("%d%d",&n,&k);
	a = qq(n);
	k = a-k+1;
	printf("%d\n",digit(n,k));
} 











