#include<stdio.h>
#include<string.h>
//˼·�ϻ���Ҫ��һ��ֵȷ����λ��ֵ0��1 ,�ñ���t����¼�� 
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
		n = 0;//��¼��λ��ֵ 
		i = 0;//��¼��λ���� 
		if(t<o)
			min = t;//��min����С�ĳ��ȣ�
		else
			min = o;//ֻ��min��ֵȻ��ʹ����һλ��ʼѭ���Ƚ�
		
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
			m = one[o]-'0'+two[t]-'0'+n;//�����ַ���ʽ��������������Լ��ı�ʾ����Ҫ��ʮ���ƵĻ���Ҫ-'0';
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
