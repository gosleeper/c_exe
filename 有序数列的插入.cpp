#include<stdio.h>
#define MAX_SIZE 1001

int getarray(int array[])
{
	int i;
	for(i=0;i<MAX_SIZE;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]==0)
			return 0;
	}
}

int insert(int array[],int key,int vol)
{
	int i;
	for(i=0;i<=vol;i++)
	{
		if(array[vol]==0)
			return -2;
		if(array[i]==key)
			return -1;
		if(array[i]==0&&array[i-1]<key)
			return i;
		else if(array[i]>key)
		{
			if(i==0)
				return i;
			else if(array[i]==0)
				return i;
			else if(array[i-1]<key)
				return i;
		}
	}
}
int result(int flag)
{
	if(flag==-2)
		printf("The array if full!\n");
	else if(flag==-1)
		printf("The key is already in this array!\n");
	else
		printf("The key is inserted in position %d.\n",flag);
}
int main()
{
    int array[MAX_SIZE], cases, i, key;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        getarray(array);
        scanf("%d", &key);
        result(insert(array, key, MAX_SIZE - 1));
    }
    return 0;
}

