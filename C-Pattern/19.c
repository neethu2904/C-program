#include<stdio.h>
int main(){
    int i,j,size;
    printf("Enter the size");
    scanf("%d",&size);
    for(i=0;i<=size;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }
    for(i=size-1;i>=0;i--){
         for(j=1;j<=i;j++){
               printf("%d",j); 
        }printf("\n");
    }
}