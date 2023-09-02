// Calculate the average of all elements in the array
#include <stdio.h>
int main(){
    int i,size,a[i],Sum=0,avg;
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        Sum = Sum+a[i];
    }
    avg = Sum/size;
    printf("Average of elements in array :%d",avg);
}