/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   int i,j,size;
    printf("Enter the size:");
    scanf("%d",&size);
    for(i=0;i<=size;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}
