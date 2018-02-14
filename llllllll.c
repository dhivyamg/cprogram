#include <stdio.h>
#include<string.h>
int main(void) {
	char a[45];
	printf("enter the num");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
