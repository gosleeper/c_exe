#include<stdio.h>
#include<string.h>
//思路上还是要来一个值确定进位的值0和1 ,让变量t来记录； 
int main()
{
	char one[20], two[30];
	int i,m,o,t,min,n; 
	

	while(scanf("%s%s",one,two)!=EOF)
	{
		o=strlen(one);
		t=strlen(two);
		o -=1;
		t -=1;
		n = 0;//记录进位的值 
		i = 0;//记录进位次数 
		if(t<o)
			min = t;//让min是最小的长度；
		else
			min = o;//只是min的值然后就从最后一位开始循环比较
		
		while(1)
		{
			if(o==-1||t==-1)
			{
				if(o==-1&&t!=-1)
				{
					if(n==1)
						while(t>=0)
						{
							if(two[t]-'0'==9)
							{
								i++;
								t--;
							}
							else 
								break;
						
						}
					else  ;
				}else if(t==-1&&o!=-1)
				{
					if(n==1)
						while(o>=0)
						{
							if(one[o]-'0'==9)
							{
								i++;
								o--;
							}
							else 
								break;
						}
					else  ;
				}
				printf("%d\n",i);
				break;
			}
			m = one[o]-'0'+two[t]-'0'+n;//对于字符形式储存的数字有她自己的表示，想要用十进制的话就要-'0';
			if(m>=10)
			{
				n=1;
				i++;
			}
			else 
				n=0;
			o--;
			t--;
		}
	}
	return 0;
}
