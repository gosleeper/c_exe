#include <stdio.h>
int ss(int s){
	int m=2;
	if (s<=1) return 0;
	for( ;m*m<=s;m++)
		if (s%m==0) return 0;
	return 1;
}

int main() {
	int a, b,c;
	
	scanf("%d %d",&a,&b);
	c = b;
	
	
	printf("=====\n");

	while (b>=a){
		if ((ss(b)) == 1) 
			printf("%d\n",b);
		
		b--;
	}
	
	printf("=====\n");

}

