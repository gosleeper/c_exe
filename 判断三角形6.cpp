#include<stdio.h>£» 

int main() {
	int a, b, c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==0||b==0||c==0){
			break ;
		}
		if(a+b>c&&a+c>b&&b+c>a){ 
			if(a==b&b==c){
				printf("a equileteral triangle\n");
				continue ;
			}
			else if(a==b||a==c||c==b)
			{
					printf("a isosceles triangle\n");
					continue ;
			}
			
			else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
				{
					printf("a right triangle\n");
				} 
			else if(1)
			{
					printf("a triangle\n");
			}
			} 
		else 
			printf("not a triangle\n");
	}
	
}
