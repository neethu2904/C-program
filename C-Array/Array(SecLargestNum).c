/******************************************************************************
Write a program to find Second Largest Number in an Array

*******************************************************************************/
#include<stdio.h>
int main(){
    int size,i,j,a[100],Largest=0,secLargest=0;
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(Largest<a[i]){
                Largest = a[i];
            }
        }
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(secLargest<a[i] && secLargest<Largest){
                secLargest =a[i];
             }
        }
        
    }printf("Second Largest number is %d",secLargest);
}