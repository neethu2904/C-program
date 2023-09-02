#include<stdio.h>
int main(){
    int i,j,size,k;
    printf("Enter the size");
    scanf("%d",&size);
    for(i=size;i>=1;i--){
        k=i;
        for(j=size;j>=i;j--){
            printf("%d",k);
            k++;
        }printf("\n");
    }
}

  
