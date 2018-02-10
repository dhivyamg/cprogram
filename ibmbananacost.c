#include <stdio.h>

int main(void) {
	float bananacost,applecost,totalcost;
	int a,b;
	printf("total cost is");
	scanf("%f",&totalcost);
	printf("apple cost per kg is");
	scanf("%f",&applecost);
	printf("apple count in kg and banana count");
	scanf("%d%d",&a,&b);
	bananacost=(totalcost-a*applecost)/b;
	printf("%f",bananacost);
	return 0;
}
