/******************************************************************************
Write a program to find the frequency of each element in the array.

*******************************************************************************/
#include<stdio.h>
int main(){
    int size,i,j,count,a[100];
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size;i++){
        count =0;
        for(j=0;j<size;j++){
            if(a[i]==a[j]){
                if(i>j){
                    break;
                }
                    count++;
            }
        }
        if(count!=0){
            printf("frequency of %d element are : %d\n",a[i],count);
        }
    }
    
}