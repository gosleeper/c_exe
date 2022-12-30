#include<stdio.h>

int main()
{
	int a;
	struct student
         {
             int serial;
             double score;
             char level;
             char name[14];
         } qq;
	a = sizeof(qq);
	
	printf("%d",a);
 } 
