#include<stdio.h>
#include<stdlib.h>

double* allocate(int n)
{
	return (double*)malloc(n*sizeof(double)); 
 } 
 
 void input(double* p,int n)
 {
 	for(int i =0;i<n;i++)
 	{
 		scanf("%lf",p+i);
	 }
 }
 
void output(double* p,int n)
{
	int m1,m2;
	scanf("%d %d",&m1,&m2);
	
	if(m1<1)
		m1 = 1;
	if(m1>n||m2<1)
		printf("no output\n");
	for(int i = m1-1;i<n&&i<m2;i++)
	{
		printf("%lg\n",p[i]);
	}
}

void release(double*p)
{
	free(p);
}
int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}

