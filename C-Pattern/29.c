
#include <stdio.h>

int main()
{
    int size,i,j;
    int k=1;
    int m=1;
     printf("Enter the size:");
     scanf("%d",&size);
     for(i=1;i<=size;i++){
         for(j=1;j<=3*i;j++){
                printf("* ");
         }printf("\n");
         for(k=1;k<=2;k++){
             printf("*\n");
         }
     }
     
}