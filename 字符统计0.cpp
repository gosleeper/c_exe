#include<stdio.h>
#include<ctype.h>
int w[91];
int main() {
 	char p[1000000];
	int a,b=0,c=0,d=0,e=0,f=0,i=0;//b是小写，c是大写，d是数字，e是空白符，，f是标点符号。 
	char q;
	int n;
	
	while(scanf("%c",&q)!=EOF){
		p[i] = q;
		i++;
	}
	
	for(a=0;a<i;a++)
	{
		if(islower(p[a])!=0){
			n = p[a];
			w[n-32]++;
			b += 1;}
		else if(isupper(p[a])!=0){
			c += 1;
			n = p[a];
			w[n] += 1;
		}
		else if(isdigit(p[a])!=0)
			d += 1;
		else if(isspace(p[a])!=0)
			e +=1;
		else if(ispunct(p[a])!=0)
			f += 1;
	}
	printf("All Characters : %d\n",i-1);
	printf("Lowers : %d\n",b);
	printf("Uppers : %d\n",c);
	printf("Digits : %d\n",d);
	printf("Spaces : %d\n",e);
	printf("Puncts : %d\n",f);
	
	i = 65;
	for( ;i<=90;i++){
		printf("%c : %d\n",i,w[i]);
	}
}
