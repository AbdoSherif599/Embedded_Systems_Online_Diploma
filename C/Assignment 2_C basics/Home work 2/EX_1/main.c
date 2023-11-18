#include<stdio.h>
int main (void)
{
	int a,b;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is even",a);
	else
		printf("%d is odd",a);
 return 0;
}
