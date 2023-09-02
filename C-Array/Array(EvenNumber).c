/*Write a program to find the number of even numbers in an array
The program should accept an array and display the number of even numbers contained in that array
E.g.: Output: Enter the size of an array
Input: 5
Output: Enter the values of array
Input: 11, 20, 34, 50, 33
Output: Number of even numbers in the given array is 3
*/


#include <stdio.h>
void main()
{
    int size,i,a[100] ,count=0;
    printf("enter the size:");
    scanf("%d",&size);
    printf("Enter the value of array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++){
        if(a[i]%2==0){
            count=count+1;
        }
    }
    printf("\n Number of even numbers in the given array is %d",count);
}
