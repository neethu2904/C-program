/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int size,i,j;
    printf("Enter the size:");
    scanf("%d",&size);
    for(i=0;i<=size;i++){
        for(j=0;j<=size;j++){
            if(j<=i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        for(j=size;j>=0;j--){
            if(j<=i){
                printf("*");
            }else{
                printf(" ");
            }
            
        }printf("\n");

        
    }

   
}
