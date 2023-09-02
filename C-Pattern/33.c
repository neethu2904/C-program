
#include <stdio.h>

int main()
{
    int size,i,j;
    int k=1;
     printf("Enter the size:");
     scanf("%d",&size);
     for(i=0;i<=size;i++){
         for(j=1;j<=4*i;j++){
                printf("X ");
         }printf("\n");
         for(k=0;k<=i;k++){
             printf("X\n");
         }
     }
     
}