#include<stdio.h>
int main (void)
{
	int num,index=-1,element;
	int mat1[10];
	printf("Enter number of elements: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	for (int i = 0;  i < num;i++)
	{
		scanf("%d",&mat1[i]);
	}

	printf("Enter number to be searched: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&element);
	for (int i = 0;  i < num;i++)
	{
		if(mat1[i]==element)
			{index=i;
			break;
			}
	}
	if(index==-1)
		printf("Number not found");
	else
		printf("Number found at location %d",index+1);
 return 0;
}
