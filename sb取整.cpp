#include<stdio.h>
int myFloor(double data){
	int a;
	if(data==(int)data)
		return data;
	else if(data>0)
		return a =(int)data;
	else if(data<0)
		return a = (int)data-1;
	else
		return 0;
}
int myCeil(double data){
	int a;
	if(data==(int)data){
		return data;
	}else
	if(data>0){
		return a=(int)data+1;
	}else if(data<0)
		return a=(int)data;
	else
		return 0;
}

int main()
{
    double data;
    while(scanf("%lf", &data) != EOF)
        printf("%d %d\n", myFloor(data), myCeil(data));
    return 0;
}
