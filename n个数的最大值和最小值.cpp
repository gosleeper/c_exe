#include <stdio.h>

int main () {
	int a, b, c, max=0, mini=0;
	
	scanf("%d",&a);
	
	for(b = 1;b <= a;b++){
		scanf("%d",&c);
		if (b==1){
			max = c;
			mini = c;
	}
		if (c>max)
			max = c;
		if (c<mini)
			mini = c;
}
	printf("The maximum number is %d.\n",max);
	printf("The minimum number is %d.\n",mini);
	
	return 0;
} 
