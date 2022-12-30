#include <stdio.h>

int main() {
	char a, b;
	double low, high, step, high1;
	
	scanf("%s->%s",&a,&b);
	scanf("%lf %lf %lf",&low,&high,&step);
	
	if(a=='C'){
		printf("   C  ->    F\n");
		
		while(low<=high+0.01){
			high1 = low * 9.0 / 5 + 32;
			printf("%5.1f -> %5.1f\n",low,high1);
			low +=step;
		}
	}
	
	if(a=='F'){
		printf("   F  ->    C\n");
		
		while(low<=high+0.01){
			high1 = (low - 32) * 5.0 / 9;
			printf("%5.1f -> %5.1f\n",low,high1);
			low += step;
		} 
}
	return 0;
}
