#include<stdio.h>
#include<string.h>
void str_sep(char s[],char t[],char r[])
{
	int i;
	i = strlen(r);
	
	int j;
	for(j=0;j<i;j++)
	{
		if(j/2==0)
		{
			s[j/2] = r[j];
			s[j/2+1] = '\0';
			
		}
		else{
			t[j/2] = r[j];
			s[j/2+1] = '\0';
		}
	}
 } 
int main()
{
    char r[101], s[101], t[101];
    gets(r);
    str_sep(s, t, r);
    puts(s);
    puts(t);
    return 0;
}
