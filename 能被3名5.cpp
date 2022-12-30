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
		if(sum!=0&&sum%3==0){//虽然他自己说的是正整数，但是tm的0本来是成立的，你不占道理，但是他们的，老子认真读题
		//他妈的还是被阴道了艹。 
			printf("Yes");
		}else printf("No");
		if(i!=M-1){
			printf("\n");
		}
		i++;
	}
	return 0;
}
