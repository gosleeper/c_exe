#include <stdio.h>
long stairs (int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    else 
    { return stairs(n-1)+stairs(n-2);}
}
void put ()
{
    int t;
    if(scanf("%d",&t)!=EOF)
    {
         printf("%ld\n",stairs(t));
         put();
    }
}
int main ()
{
    put();
}
