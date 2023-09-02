/*Write a program to sort an array in descending order
Program should accept and array, sort the array values in descending order and display it
Eg: Output: Enter the size of an array
Input: 5
Output: Enter the values of array
Input: 20, 10, 50, 30, 40
Output: Sorted array:
50, 40, 30, 20, 10
*/


#include<stdio.h>
void main(){
    int size,a[100],i,j,temp;
    printf("Enter the size of a array:");
    scanf("%d",&size);
    printf("Enter the values of a array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted Array:");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}