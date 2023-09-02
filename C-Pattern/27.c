/******************************************************************************

A 

1  1 

B  B   B 

2   2   2  2 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size,i,j;
    int k=1;
    int m=1;
     printf("Enter the size:");
     scanf("%d",&size);
     for(i=0;i<=size;i++){
         for(j=0;j<=i;j++){
             if(i%2==0){
                printf("%c",64+k);
             }else{
                 printf("%d",m);
             }
            
         }
         if(i%2==0){
             k++;
         }else{
             m++;
         }
         printf("\n");
     }
}
