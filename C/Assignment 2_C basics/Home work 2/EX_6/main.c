#include<stdio.h>
int main (void)
{
	int a,sum=0;
	printf("Enter an integer : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
 return 0;
}
