#include<stdio.h>
#include<string.h>
int main() {
	char p[21];
	char q[21];
	scanf("%s",p);
	scanf("%s",q);
	if(strcmp(p,q)==0){
		printf("ok");
	}
	else printf("p");
} 
