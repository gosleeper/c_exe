#include <stdio.h>
int main()
{
    int N,i,a,sum;
     
    while(scanf("%d",&N)!=EOF)
     
    {   
 
         sum=0;
         
        for(i=1;i<=N;i++)
         
        {
            scanf("%d",&a);
             
            sum=sum+a;
        }
         
        printf("%d\n",sum);
             
    }
 
    return 0;
}

