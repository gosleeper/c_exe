#include<stdio.h>
#include<string.h>

char zh(char a){
	if(a>='A'&&a<='Z'){
		a = a +32;
		return a;
	}else return a;
}

int main(){
	char p[21];
	char q[21];
	int c =0;
	scanf("%s",&p);
	
	for(int i=0;i<20;i++){
		p[i] = zh(p[i]);
	}
	
	while(scanf("%s",&q)!=EOF){
		if(c<5){
			for(int w=0;w<20;w++){
				q[w] = zh(q[w]);
			}
			if(strcmp(p,q)==0){
				printf("Welcome!\n"); 
				return 0;
			}else printf("Wrong!\n");
			c++;
		}else
			printf("Out of limited!\n");
	}
	return 0;
}











