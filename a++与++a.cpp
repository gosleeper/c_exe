#include <stdio.h>

int main () {
	int a = 10;
	
	printf("a++=%d\n",a++);  //整个a++表示的是在未计算前的a的值，但本质上这个算式已经确定了执行a++; 
	printf("a=%d\n",a);    //所以在这一步我们可以看的出来，a已经拥有了11的值; 
	
	printf("++a=%d\n",++a);
	printf("a=%d\n",a);
	return 0;
}
