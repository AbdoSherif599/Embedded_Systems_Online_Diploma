#include<stdio.h>
int main (void)
{
	float x,y;
	printf("Enter tow numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f%f",&x,&y);
	printf("product:%f",x*y);
 return 0;
}
