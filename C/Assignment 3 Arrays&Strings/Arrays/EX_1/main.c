#include<stdio.h>
int main (void)
{
	float mat1[2][2],mat2[2][2],sum[2][2];
	printf("Enter the elements of 1st matrix: ");
	fflush(stdout);
	fflush(stdin);
	for (int i = 0;  i < 2;i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("\nEnter a%d%d:",i+1,j+1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f",&mat1[i][j]);

		}
	}
	printf("Enter the elements of 2st matrix: ");
		fflush(stdout);
		fflush(stdin);
		for (int i = 0;  i < 2;i++)
		{
			for (int j = 0; j < 2; j++)
			{
				printf("\nEnter b%d%d:",i+1,j+1);
				fflush(stdout);
				fflush(stdin);
				scanf("%f",&mat2[i][j]);

			}
		}
		printf("Sum of matrix : \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
	    {
	    	printf("%f\t",mat1[i][j]+mat2[i][j]);

	    }
		printf("\n");

	}

 return 0;
}
