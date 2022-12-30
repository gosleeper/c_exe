#include<stdio.h>
#include<string.h>

int main(){
	char p[21];
	char q[21];
	int i=0;
	
	scanf("%s",p);
	
	for(i=0;i<5;i++){
		scanf("%s",q);
		if(strcmp(p,q)==0){
			printf("Welcome!\n");
			return 0;
		}else 
			printf("Wrong!\n");
	}
	while(scanf("%s",q)!=EOF){
		
		printf("Out of limited!\n");
	}
	return 0;
	
}
