#include<stdio.h>
int main()
{
    int max,min;
    scanf("%d %d",&min,&max);
    printf("=====\n");
    int i;
    if(min==0||min==1)
        min=2;
    for(i=max; i>=min; i--)
    {
        int flag=0;
        int j;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(flag==0)
            printf("%d\n",i);
        flag=0;
    }
    printf("=====");
    return 0;
}

