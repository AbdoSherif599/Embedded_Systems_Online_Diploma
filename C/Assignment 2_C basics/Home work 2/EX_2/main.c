#include<stdio.h>
int main (void)
{
	char a,b;
	printf("Enter an alphabet: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i' ||a=='o' || a=='A' || a=='E' || a=='I' ||a=='O')
		printf("%c is a vowel",a);
	else
		printf("%c is a consonant",a);
 return 0;
}
