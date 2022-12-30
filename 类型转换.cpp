#include <stdio.h>

int main ()  {
	
	int a;
	int b;         在这两个变量的定义中，类型的定义是很重要的 
	 
	scanf("%d %d", &a, &b);   #在这一行中有一个疑点，假设我已经定义好了变量类型，在这个函数中我也需要一一对应吗？还有类型转换在这里是不是没用，   
	double change = (a + b / 12) * 0.3048;
	printf("ok=%f",change);
}

