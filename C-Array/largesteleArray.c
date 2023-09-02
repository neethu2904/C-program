//Find the largest element in the array.
#include<stdio.h>
int main(){
    int a[50],i,size;
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the element of array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Element are:");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    int max = a[0];
    for(i=1;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
    }printf("\nLargest element in Array %d",max);
}