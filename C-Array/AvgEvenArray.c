//Find the average of even elements in the array.

#include <stdio.h>
int main(){
    int i,size,a[i],sum,count=0;
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size;i++){
        if(a[i]%2==0){
            sum = sum+a[i];
            count++;
        }
    }printf("Average of Even elments:%d",sum);
}