/******************************************************************************
Write a program to find smallest of three numbers using ternary operator.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the number");
    scanf("%d%d%d",&num1,&num2,&num3);
    int temp = (num1<num2)?num1:num2;
    int result = (num3<temp)?num3:temp;
    printf("Smallest of three numbers:%d",result);
}
