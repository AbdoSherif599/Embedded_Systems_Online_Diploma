#include<stdio.h>
int main (void)
{
	int num,index,element;
	int mat1[10],mat2[10];
	printf("Enter number of elements: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	for (int i = 0;  i < num;i++)
	{
		scanf("%d",&mat1[i]);
	}

	printf("Enter the element to be inserted: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&element);
	printf("Enter the location: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&index);
	for (int i = num-1; i >= index-1; --i)
	{
		mat1[i+1]=mat1[i];
	}
	mat1[index-1]=element;
	for (int i = 0;  i < num+1;i++)
	{
		printf("%d  ",mat1[i]);
		fflush(stdout);
		fflush(stdin);
	}
 return 0;
}
