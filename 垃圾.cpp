#include<stdio.h>
int count_array(int a[],int n,int val)
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==val)
			sum += 1;
	}
	return sum ; 
}

int main()
{
    int a[100], i, n, val, cnt;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &val);
    cnt = count_array(a, n, val);
    printf("%d\n", cnt);
}

