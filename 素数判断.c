#include <stdio.h>

int is_prime(int num){
    int n;
    for(n=1;n*n<=num;n++){
        if(num%n==0)
            return 0;
        else
            return 1;
    }
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
