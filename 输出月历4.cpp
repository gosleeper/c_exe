#include <stdio.h>

int main() {
	int a;
	int i = 1;
	int n =1;
	scanf("%d",&a);
	n = 7 - a;
	int c = (a+1)*4-2;
	
	printf("Sun Mon Tue Wen Thu Fri Sat\n");
	while(i<=30){
		if(i==1){
			if(a==7)
				printf("%3d ",i);
			else{
				printf("%*s",c," "); 
			    printf("%d ",i);
		}
		}
		if(i>=2&&i!=30&&i%7!=n){
		
			printf("%3d ",i);}
		if(i%7==n){
			if(a==6&&i==1)
				printf("\n");
			else if(i!=30)
				printf("%3d\n",i);
					
			}
		if(i==30){
		
			printf("%3d",i);}
		i++;
	}
}



