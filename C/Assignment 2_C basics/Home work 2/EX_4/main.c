#include<stdio.h>
int main (void)
{
	float a;
	printf("Enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	if(a>0)
	{
		printf("%f is positive ",a);
	}
	else if(a<0)
	{
		printf("%f is negative ",a);
	}
	else
		printf("you entered zero");
 return 0;
}
