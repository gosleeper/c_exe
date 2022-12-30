#include <stdio.h>
#include<math.h>
int is_primer(int num){
    int n;
    if(num==1)
        return 0;
    if(num==2)
        return 1;
    int c = sqrt(num);
    for(n=2;n<=num;n++){
        if(num%n==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
