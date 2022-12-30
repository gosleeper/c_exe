#include <stdio.h>


int main ()  {
	int a;
	int b;
	
	scanf("%d %d", &a, &b);
	double change = (a + b / 12.0) * 0.3048;
	printf("ok=%f",change);
	
	return 0;  //解释代码的双斜杠要放在代码后面，让计算机认为解释是从双斜杠开始后面的一行开始; 
	
}
