#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main (){
	char str[200];
	int a,b,c,d,e,i=0,i1=0;
	char str1[200];
	int i2;
	
	while(1)
	{
		gets(str);
		for(i2=0;i2<200;i2++){
			str1[i2]=0;
		}
		a = strlen(str);
		i1 =0;
		for(i=0;i<a;i++){
			if(isspace(str[i]))
				continue ;
			else{
				str1[i1] = str[i];
				i1++;
			}
		}
		str1[i1] = '\0';
		if(str1[0]=='E'&&str1[1]=='N'&&str1[2]=='D'&&str1[3]=='\0'){
			printf("END");
			return 0;
		}
		for(i=0;i<a;i++){
			if(isspace(str[i]))
				continue ;
			else 
				break ;
		}
		b =i;
		for(i=a-1;i>=0;i--){
			if(isspace(str[i]))
				continue ;
			else 
				break;
		}
		c =i;
		for(i=b;i<=c;i++){
			printf("%c",str[i]);
			if(i==c){
				printf("\n");
			}
		}
			
	}
	
}









