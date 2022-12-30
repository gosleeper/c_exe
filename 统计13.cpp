#include<stdio.h>

int main() {
	int a,i,b,c;
	scanf("%d",&a);
	int p[500090] ={0};
	
	for(i=0;i<a;i++){
		scanf("%d",&b);
		p[b] += 1;
	}
	c = p[0]; 
	for(i = 0;i<60090;i++){
		if(p[i]>c){
			c = p[i];
		}
	}
	printf("%d",c);
	
}
