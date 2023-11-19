#include<stdio.h>
#include <string.h>
int main (void)
{
	char a[100],length=0;
	printf("Enter a string: ");
	fflush(stdout);
	fflush(stdin);
	gets(a);
	int i=0;
	while(a[i]!=0)
	{
		length++;
		i++;
	}

	printf("length of the string : %d ",length);
 return 0;
}
