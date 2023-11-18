#include<stdio.h>
int main (void)
{
	char a;
	printf("Enter a char: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&a);
	if((a>='a' && a <='z') || (a>='A' && a <='Z') )
	{
		printf("%c is an alpahabet ",a);
	}
	else
		printf("%c is not an alpahabet ",a);
 return 0;
}
