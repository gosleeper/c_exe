#include<stdio.h>
int add(int n){
	static int b = 0;
	b += n;
	return b;
}

int main()
{
    int min, max, sum;    
    scanf("%d%d", &min, &max);    
    while(min <= max)
        sum = add(min++);        
    printf("%d", sum);    
    return 0;
}
