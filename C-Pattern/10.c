/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{  
    int i,j,s,size;
    printf("Enter the size:");
    scanf("%d",&size);
   
       for(i=size;i>=1;i--){
        for(j=1;j<=size;j++){
		    if(j<=i){
             printf("*");
		    }else{
		        printf(" ");
		    }
        }
        for(j=size-1;j>=1;j--)
        {
            if(j<=i){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }

    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
		    if(j<=i){
             printf("*");
		    }else{
		        printf(" ");
		    }
        }
        for(j=size-1;j>=1;j--)
        {
            if(j<=i){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
    
}
    
