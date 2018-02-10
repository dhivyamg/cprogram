#include <stdio.h>

int main(void)
{
	int years,loanamount,salary;
	int loan;
	printf("how many yeas worked in this company");
	scanf("%d",&years);
	printf("\nany other loans taken");
	scanf("%d",&loan);
	printf("\nloan amount is");
	scanf("%d",&loanamount);
	printf("\nsalary is ");
	scanf("%d",&salary);
	
	if((years>=5)&&(loanamount<(3*salary))&&(loan==0))
	{
		printf("\nloan sanction");
	}
	else
	{
		printf("loan not sanction");
	}
	
	return 0;
}
