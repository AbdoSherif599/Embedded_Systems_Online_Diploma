#include<stdio.h>
#include <string.h>
int main (void)
{
	char a[100],freq=0,charactar;
	printf("Enter a string: ");
	fflush(stdout);
	fflush(stdin);
	gets(a);
	printf("Enter a char to find freq: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&charactar);
	for (int i = 0;  i < strlen(a);i++)
	{
		if(a[i]==charactar)
		freq++;
	}

	printf("frequency of %c = %d ",charactar,freq);
 return 0;
}
