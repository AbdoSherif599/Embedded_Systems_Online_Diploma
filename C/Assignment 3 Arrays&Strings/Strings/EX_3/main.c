#include<stdio.h>
#include <string.h>
int main (void)
{
	char a[100],length=0,temp;
	printf("Enter a string: ");
	fflush(stdout);
	fflush(stdin);
	gets(a);
	int i=0;
	for (int i = 0; i < strlen(a)/2; ++i)
	{
		temp=a[i];
		a[i]=a[strlen(a)-i-1];
		a[strlen(a)-i-1]=temp;

	}

	printf("reverse string is %s ",a);
 return 0;
}
