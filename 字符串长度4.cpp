#include<stdio.h>
#include<string.h>
int main(){
	int i=1,j,a,b;
	char p[1001];
	scanf("%d",&j);
	getchar(); 
	
	while(i<=j){
		gets(p);
		a = strlen(p);
		printf("case %d:length=%d.\n",i,a);
		i++; 
	}
	return 0;
}
