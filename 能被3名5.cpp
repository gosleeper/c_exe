#include<stdio.h>
#include<string.h>
int main() {
	char str[1008];
	int M,N,i=0,a;
	scanf("%d",&M);
	getchar();
	while(i<M){
		scanf("%s",&str);
		a =strlen(str);
		int sum=0;
		for(int b=0;b<a;b++){
			sum += str[b]-'0';
		}
		if(sum!=0&&sum%3==0){//��Ȼ���Լ�˵����������������tm��0�����ǳ����ģ��㲻ռ�����������ǵģ������������
		//����Ļ��Ǳ�������ܳ�� 
			printf("Yes");
		}else printf("No");
		if(i!=M-1){
			printf("\n");
		}
		i++;
	}
	return 0;
}
