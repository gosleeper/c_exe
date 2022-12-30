#include<stdio.h>

int yueshu(int a,int b){
	int t;
	if(a==0&&b==0)
		return 0;
	if(a!=0&&b==0)
		return a;
	if(a==0&&b!=0)
		return b;
	if(a!=0&&b!=0){
		while(b>0){
			t = b;
			b = a % b;
			a = t;
	}
		return a;
	}
}

int beishu(int a,int b){
	int i;
	int t = a;
	if(a==0||b==0)
		return 0;
	for(i = 2;a%b!=0;i++){
		a = i * t; 
	}
	return a;
}

int main() {
	int a,b;
	while(scanf("%d %d",&a,&b) != EOF){
		printf("%d %d\n",yueshu(a,b),beishu(a,b));
	}
	return 0;
}
