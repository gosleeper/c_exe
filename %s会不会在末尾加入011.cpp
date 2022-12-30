#include<stdio.h>
#include<string.h> 

int main(){
	char one[30];
	scanf("%s",one);
	int a= strlen(one);
	printf("%d\n",a);
	printf("%s",one);
	return 0;
}//最后的代码验证证明%s遇到空白符后就会结束并加入\0; 
