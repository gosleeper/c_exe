#include<stdio.h>
int i = 0;
int apk(int a){

	int c;
	scanf("%d",&c);
	i = i+c;
	if(a==1)
		return i;
	apk(a-1);
}

int main(){
	int a;
	scanf("%d",&a);
	printf("%d",apk(a));
} 
