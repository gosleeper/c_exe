#include<stdio.h>

int main() {
	int n,i, a, b;
	scanf("%d",&n);
	int p[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a);
		p[i] = a;
	}
	for(int c=n;c>0;c--)
		for(i=0;i+1<c;i++){
			if(p[i]<p[i+1]){
				continue;
			}else if(p[i]>p[i+1]){
						b = p[i];
						p[i] = p[i+1];
						p[i+1] = b;
			}
		}
	i = 0;
	printf("%d",p[0]);
	for(i =1;i<n;i++ ){
		printf(" %d",p[i]);
	}
	
}
