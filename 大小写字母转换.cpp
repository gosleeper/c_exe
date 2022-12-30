#include<stdio.h>

char putc(char b){
	if(b>='a'&&b<='z'){
		 return b = b - 32;
	}
	else return b = b + 32;
} 
int main(){
	int a;
	a = getchar();
	putchar(putc(a));
}  
