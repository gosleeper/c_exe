#include<stdio.h>//��ֻ��˵sb���ղݣ��ж��ǲ���������Ҫ���ü�������ó��ķ�������0he1���жϺ��ظ��������ü������
//���ǻ۵����飨a+b>c&&b+c>a&&a+c>b�����������ǿ����ж�����ܳ������ôsb

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
