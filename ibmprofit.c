#include <stdio.h>

int main(void) {
	int sellingprice,cost,profit;
	printf("enter the prices");
	scanf("%d%d",&sellingprice,&cost);
	profit=sellingprice-cost;
	printf("profit is %d",profit);
	return 0;
}
