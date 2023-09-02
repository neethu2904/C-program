
#include <stdio.h>

int main()
{
    int size,i,j;
    int k=1;
     printf("Enter the size:");
     scanf("%d",&size);
     for(i=size;i>=1;i--){
         for(j=1;j<=2*i;j++){
                printf("X ");
         }printf("\n");
         for(k=1;k<=1;k++){
             printf("X\n");
         }
     }
     
}