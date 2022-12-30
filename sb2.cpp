#include<stdio.h>

int main(){
	int a,b,c,N;
	scanf("%d",&N);
	
	if(N==1||N==-1){
		printf("%d",N);
		return 0;
	}
	if(N==0){
		printf("0");
	}
	if(N>0){
		for(a=1;a<N;a++){
			printf("%d ",a); 
		}
		printf("%d",N);
	}
	if(N<0){
		for(b=-1;b>N;N++){
			printf("%d ",N);
		}
		printf("%d",b);
	}
	return 0;
	
}
