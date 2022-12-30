 #include <stdio.h>

 int main()  {
 	
 	int amount = 100;
 	int price = 0;
 	
 	printf("请输入价格：");
	 
	printf("请输入面额:");
	scanf("%d %d",&price, &amount);
	
	int give = price - amount;
	printf("将找给你：%d",give); 
 }
