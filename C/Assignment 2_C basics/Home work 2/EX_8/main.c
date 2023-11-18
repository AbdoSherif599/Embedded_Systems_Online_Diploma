#include<stdio.h>
int main (void)
{
	char a;
	float op1,op2;
	printf("Enter operation + or - or * or / : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&a);
	printf("Enter two operands : ");
    fflush(stdout);
    fflush(stdin);
    scanf("%f%f",&op1,&op2);
	switch (a) {
		case '+': printf("%.2f %c %.2f = %.2f",op1,a,op2,op1+op2);
			      break;
		case '-': printf("%.2f %c %.2f = %.2f",op1,a,op2,op1-op2);
				  break;
		case '*': printf("%.2f %c %.2f = %.2f",op1,a,op2,op1*op2);
				  break;
		case '/': printf("%.2f %c %.2f = %.2f",op1,a,op2,op1/op2);
				  break;
		default:
			break;
	}

 return 0;
}
