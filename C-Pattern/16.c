#include<stdio.h>
int main(){
    int i,j,size;
    printf("Enter the size");
    scanf("%d",&size);
    for(i=size;i>=1;i--){
        for(j=size;j>=i;j--){
            printf("%d",j);
        }printf("\n");
    }
}