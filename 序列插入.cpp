#include<stdio.h>
#define MAX_SIZE 1000
int a=0;
int q=0;

int getkey(int key[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&key[i]);
	return n;
}
int getarray(int array[])
{
	int i;
	for(i=0;1;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]==0)
		{
			a = i;
			return 0;
		}
	}
}
int insert(int array[],int key,int vol)
{
	int i;
	if(vol<=a)//q��ʾ����һ�����ͼ�һ����������Ϊ1000��q��һ��ȫ�ֱ�������Ϊʲôʧ���ء� 
		return -1;
	if(array[0]>key)//�ڵ�һ��Ԫ�ؾ��жϣ�������ɺ���в����һ�ı��� 
	{
		q++;
		a+=q;
		return q-1;
	}
	for(i=0;i<a;i++)
	{
		if(key==array[i])
			return -2;
		if(array[i]<key)
		{
			if(array[i+1]>key||i==a-1)
			{
				q++;
				a+=q;
				return (q+i);
			}
		}	
	}
		
}
void result(int flag)
{
	if(flag==-1)
		printf("The array if full!\n");
	else if(flag==-2)
		printf("The key is already in this array!\n");
	else 
		printf("The key is inserted in position %d.\n",flag);
}
int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}
