/*Write a program to add to two dimensional arrays
Program should accept two 2D arrays and display its sum
Eg: Output: Enter the size of arrays
Input: 3
Output: Enter the values of array 1
Input: 
1 2 3
4 5 6
7 8 9
Output: Enter the values of array 2
Input:
10 20 30
40 50 60
70 80 90
Output: Sum of 2 arrays is:
11 22 33
44 55 66
77 88 99
*/

#include<stdio.h>
void main(){
    int size, a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the values of array 1:");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of array 2:");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of Two Arrays are:");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%3d\n\t",sum[i][j]);
        }
    }
}