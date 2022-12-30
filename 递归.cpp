#include<stdio.h>

int h(int a, int b){

    if(a==b)
        return b;
    else
        return h(a, b-1)+b;
}

int main() {
    int i0=0, i1=0, sum = 0, N;
    int min, max;


//    scanf("%d",&N);

//    while(i0<N){
//        i0++;
        scanf("%d %d",&min,&max);
        printf("case i:sum=%d.\n",h(min,max));
//    }
}
//进入嵌套循环，一个循环里面求和一次

