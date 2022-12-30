#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d\n%d%d",&a,&b,&c);
	printf("%d%d%d",a,b,c); //但是需要注意的是，虽然 scanf 中没有加任何“非输入控制符”，
							//但是从键盘输入数据时，给多个变量赋的值之间一定要用空格、回车或者 Tab 键隔开，用
							//以区分是给不同变量赋的值。而且空格、回车或 Tab 键的数量不限，只要有就行。一般都使用一个空格。
	
	return 0; 
}
