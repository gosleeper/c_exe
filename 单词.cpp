#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ch[1020];
    int i,n,k;
    while(gets(ch))
    {
        if ((ch[0]>='A'&&ch[0]<='Z')||(ch[0]>='a'&&ch[0]<='z'))
            k=1;
        else
            k=0;
        n=strlen(ch);
        for(i=0;i<n-1;i++)
        {
            if(ch[i]<'A'||(ch[i]>'Z'&&ch[i]<'a')||ch[i]>'z')
            {
                if((ch[i+1]>='A'&&ch[i+1]<='Z')||(ch[i+1]>='a'&&ch[i+1]<='z'))
                    k++;
                else
                    k+=0;
            }
            else
                k+=0;
        }
        printf("%d\n",k);
    }

    return 0;
}


