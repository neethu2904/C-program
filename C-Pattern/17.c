#include<stdio.h>
int main(){
    int i,j,size;
    printf("Enter the size");
    scanf("%d",&size);
    for(i=0;i<=size;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }printf("\n");
    }
}