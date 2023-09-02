#include<stdio.h>
 int main(){
     int size,i,j;
     printf("Enter the size:");
     scanf("%d",&size);
     for(i=1;i<size;i++){
         for(j=1;j<=i;j++){
             printf("%c",64+j);
         }printf("\n");
     }
 }