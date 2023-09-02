/*Write a program to interchange the values of two arrays.
Program should accept an array from the user, swap the values of two arrays and display it on the console
Eg: Output: Enter the size of arrays
Input: 5
Output: Enter the values of Array 1
Input: 10, 20, 30, 40, 50
Output: Enter the values of Array 2
Input: 15, 25, 35, 45, 55
Output: Arrays after swapping:
Array1: 15, 25, 35, 45, 55
Array2: 10, 20, 30, 40, 50

*/

#include <stdio.h>
void main()
{
    int size,a[100],b[100],i,j,temp;
    printf("Enter the size of arrays:");
    scanf("%d",&size);
    printf("Enter the values of Array1:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the values of Array2:");
    for(i=0;i<size;i++){
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<size;i++){
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
     
    printf("Arrays after Swapping:\n");
    printf("Array1:\n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("\nArray2:");
    for(i=0;i<size;i++){
        printf("%d\t",b[i]);
    }
}
