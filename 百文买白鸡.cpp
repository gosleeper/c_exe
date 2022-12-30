#include <stdio.h>

int muji(int a,int b,int c,int d,int m,int n){ 
	int x,y,z,o=0,i=0;
	for(x=0;x<(m/a);x++)
		for(y=0;y<(m/b);y++)
			for(z=0;z<(m*d/c);z++)
				if(x+y+z==n){
					if(x*a+b*y+1.0*z*c/d==m){
						if(o==0){
						printf("COCKS,HENS,CHICKS\n");
							o = 2;
						}
						printf("%d,%d,%d\n",x,y,z);
						i=1;
					}
				if(i==0)
		printf("Cannot buy!\n");
	
}
}
int main() {
	int a,b,c,d,m,n;
	scanf("COCK,HEN,CHICK,MONEY,CHICKS");
	while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF){
		muji(a,b,c,d,m,n);
		printf("\n");
}
	return 0;
	

}
