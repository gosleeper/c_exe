#include<stdio.h>//我只能说sb啊握草，判断是不是三角形要利用计算机最擅长的方法啊，0he1的判断和重复啊，别让计算机干
//干智慧的事情（a+b>c&&b+c>a&&a+c>b）这样不就是可以判断了我艹，还这么sb

int nb(int a,int b,int c){
	int d;
	d = (a > b ?(a>c?a:c): (b>c?b:c));
	if(d == a){
		if(c+b>d)
			return 1;
		else
			return 0;
	}
	else if(d == b){
		if(a+c>b)
			return 1;
		else
			return 0;
	}
	else if(d == c){
		if(a+b>c)
			return 1;
		else
			return 0;
	}
	
}

int main() {
	int a, b, c, d, x;
	int i = 1;
	scanf("%d",&x);
	
	while(i<=x){
		i++;
		scanf("%d %d %d",&a, &b, &c);
		if(nb(a,b,c))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
