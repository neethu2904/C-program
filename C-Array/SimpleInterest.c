/*Write a program to find the simple interest.
a. The program should accept 3 inputs from the user and calculate simple interest
for the given inputs. Formula: SI=(P*R*n)/100)
Variable Data Type
Principal amount (P) Integer
Interest rate (R) Float
Number of years (n) Float
Simple Interest (SI) Float*/

#include<stdio.h>
int main()
{
	int p;
	float r,n,si;
	printf("Enter the  Principle amount,Interest rate,No.of years");
	scanf("%d%f%f",&p,&r,&n);
	si=(p*r*n)/100;
	printf("Simple Interest is : %f",si);
	
}