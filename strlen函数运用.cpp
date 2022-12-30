#include <stdio.h>
#include <string.h>
 
int main()
{
	char str[30]; 
	char lj[30];
	
	gets(str);
	gets(lj);
	
	int a = strlen(str);
	int b = strlen(lj);
	
	if (a>b) {
		printf("%s\n",str);
		printf("%s\n",lj);
}
	else {
		printf("%s\n",lj);
		printf("%s\n",str);		
}		
	return 0;
}
