#include<stdio.h>
#include<math.h> 
int is_primer(int p)
{
	if (p == 2 || p == 3)
	{ 
		return 1; 
	}
	if (p % 6 != 1 && p % 6 != 5)
	{ 
		return 0; 
	}
	if(p%6==1||p%6==5){
	for (int i = 5; i <= floor(sqrt(p)); i += 6)
	{
		if (p%i == 0 || p % (i + 2) == 0)
		{ 
			return 0;
		}
	}
}
	return 1;
}

int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}

