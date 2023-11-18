#include<stdio.h>
int main (void)
{
	int x,y;
	printf("Enter tow integers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d%d",&x,&y);
	printf("sum:%d",x+y);
 return 0;
}
