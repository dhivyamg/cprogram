#include <stdio.h>
#include<string.h>
struct employee
{
	char name[56];
	int id,salary;
}a[6];

int main(void)
{
	int i;
	for(i=0;i<6;i++)
	{
	printf("\nenter the name of employee\t");
	scanf("%s",a[i].name);
	printf("%s",a[i].name);
	printf("\nenter the id\t");
	scanf("%d",&a[i].id);
	printf("%d",a[i].id);
	printf("\nenter the salary\t");
	scanf("%d",&a[i].salary);
	printf("%d",a[i].salary);
	}

	return 0;
}
