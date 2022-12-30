#include<stdio.h>

void recursive() {
    int a=1, n=0;
    char q[1000];

    if(a==1){
        q[n] = getchar();
        if(q[n]==EOF){
            a=2;

        }
        n++;
    }

    if(a==2){
        if(n>=0){
            putchar(q[n-1]);
            n--;
            }
    else
        ;
    }
    recursive();
}

int main()
{
    recursive();
    return 0;
}
