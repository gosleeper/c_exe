#include<stdio.h>

int main() {
	char a[] = {'a','e','i','o','\0','A','E','I','O','U'}; 
	//char b='c'; 
	char c;
	int i = 0;	//i等于0的时候为什么a判断错误。 
printf("%s",&*(a+1)); //&a[i] = &*(a+1)
//	scanf("%c",&c);
//	for(;i<=9;++i){
//		printf("%c",a[i]);
//		
//	}
//	while(i<=9){
//		//printf("%d",a[0]);
//		if(a[i]==b){
//			//printf("%d",a[i]);
//			printf("yes");
//			return 0;
//			}
//		i++;
//	}
//	
	//lprintf("no");
	return 0;

}
