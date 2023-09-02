/*Accept two inputs from the user and output its sum.
Variable Data Type
Number 1 Integer
Number 2 Float
Sum Float*/
#include<stdio.h>
int main()
{
 	int a;
	float b,sum=0;
	printf("Enter an integer number and a float number");
	scanf("%d%f",&a,&b);
	sum=a+b;
	printf("%f",sum);
}