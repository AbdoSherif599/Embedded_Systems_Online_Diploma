#include<stdio.h>
int main (void)
{
	int r,c;
	int mat1[10][10],mat2[10][10];
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d%d",&r,&c);
	for (int i = 0;  i < r;i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("\nEnter a%d%d:",i+1,j+1);
			fflush(stdout);
			fflush(stdin);
			scanf("%d",&mat1[i][j]);
			mat2[j][i]=mat1[i][j];
		}
	}
	printf("Entered matrix :\n");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
	    {
	    	printf("%d\t",mat1[i][j]);
			fflush(stdout);
			fflush(stdin);
	    }
		printf("\n");
		fflush(stdout);
		fflush(stdin);
	}
	printf("Transponse matrix :\n");
	fflush(stdout);
	fflush(stdin);
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
	    {
	    	printf("%d\t",mat2[i][j]);
			fflush(stdout);
			fflush(stdin);
	    }
		printf("\n");
		fflush(stdout);
		fflush(stdin);
	}

 return 0;
}
