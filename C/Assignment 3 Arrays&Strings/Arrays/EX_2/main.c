#include<stdio.h>
int main (void)
{
	float mat1[10],sum=0;
	int num;
	printf("Enter the num of data: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);

	for (int i = 0;  i < num;i++)
	{
			printf("Enter number :");
			fflush(stdout);
			fflush(stdin);
			scanf("%f",&mat1[i]);
			sum+=mat1[i];
	}
   printf("Average = %f",sum/num);

 return 0;
}
