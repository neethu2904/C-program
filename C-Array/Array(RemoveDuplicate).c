/******************************************************************************
Program to Remove Duplicate Element in an array

*******************************************************************************/
#include<stdio.h>
int main(){
    int size,i,j,k,a[100],count=0;
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(k=j;k<size-1;k++){
                a[k]=a[k+1];
                }
            size--;
            j--;
            }
        }
    }
    printf("After Duplicate element removed is");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
}