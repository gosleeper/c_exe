#include<stdio.h>

int ai(int i){
	printf("%d\n",i);
	//return 0;这个可以编译为什么return；不可以编译,
	return 0; 
} 

int main() {
	double c = 3.3;
	ai(c);
//	return ;没想到主函数也会出现这样的情况，看来有返回值类型的话return就必须带走一个值; 
}
