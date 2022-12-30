#include<stdio.h>
#include<math.h>
void output(int m,int n)
{
        int i,z,x,a[510000]={0},flag=1;
      for(x=m;x<=n;x++)
      {
          a[x]=x;
      }
     for(i=2;i<=sqrt(n);i++)
    {
           for(z=m;z<=n;z++)
       if(a[z]!=i)
       {
           if(z%i==0)
        {
           a[z]=0;
        }
       }
       }
    for(i=m;i<=n;i++)
     {
         if(a[i]!=0&&a[i]!=1)
         {
           printf("%d\n",a[i]);flag=2;
         }

     }
   if(flag==1) printf("\n");
}
 int main()
 {   int m,n,count=1;
     while(scanf("%d %d",&m,&n)!=EOF)
      { if(count!=1)printf("\n");count=2;
       output(m, n);
       }

return 0;



 }




