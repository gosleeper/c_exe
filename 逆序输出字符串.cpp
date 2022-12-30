#include<stdio.h>
#define MAX_LEN 30

void rev(char *s,int i)
{
	if(*s){
		rev(s+1,i);
		printf("%c",*s);
	}
}
int main()
{
    char num[MAX_LEN];
    gets(num);
    rev(num, 0);
}

