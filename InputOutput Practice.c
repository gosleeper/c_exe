#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d",&a);
    while ((scanf("%d %d",&b,&c) != EOF)){
        printf("%d\n",b+c);
    }
    return 0;

}
