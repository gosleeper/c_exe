#include<stdio.h>
#include<stdlib.h>
int main()
{
	int * a = (int *)malloc(sizeof(int)*4);
	a[0] = 1; //a[i] = *(a+i)
	a[1] = 2; 
	printf("%d\n%d",*(a+0),a[0]);
	
 } 
