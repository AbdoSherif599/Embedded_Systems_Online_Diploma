#include<stdio.h>
int main (void)
{
	int x;
	printf("Enter a integer:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	printf("You entered:%d",x);
 return 0;
}
