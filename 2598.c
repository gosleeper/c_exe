#include<stdio.h>

void recursive()(){
char a;
a = getchar();
if(a!=EOF){
    recursive();
    putchar(a);
}
else
    ;
}

int main()
{
    recursive()
    return 0;
}
