#include<stdio.h>
int main (void)
{
	int a,fact=1;
	printf("Enter an integer : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);
	if(a>=0)
	{
		for(int i=1;i<=a;i++)
			{
				fact*=i;
			}
		printf("factorial = %d",fact);
		return 0;
	}
	printf("Error !!! factorial of neg number doesnot exist");

 return 0;
}
