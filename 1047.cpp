#include<stdio.h>
//ͨ�������������Ƿ��ֹ��ɣ�471+��n-1��*1000�� 
int main() {
	unsigned long long a,b,c, n=1;
	 n=1; 
	while(scanf("%llu",&n)!=EOF){
		if(n!=1)
		printf("%llu471\n",n-1);
		if(n==1)
		printf("471\n");                           //����ó˷���Ҫ���Ƿ�Χ�ǲ��ǳ����� 
	}
}

