#include<stdio.h>

int main() {
	int a,b,c;
	
	while(1){
		scanf("%d",&a);
		if(a==0){
			break ;
		}
		if(a%10==1){
			printf("%dst\n",a);
			continue;
		}
		if(a%10==2){
			printf("%dnd\n",a);
			continue;
		}
		if(a%10==3){
			printf("%drd\n",a);
			continue ;
		}
		printf("%dth\n",a);
		
	}
	return 0;
			
}
