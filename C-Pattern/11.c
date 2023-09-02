#include <stdio.h>

int main()
{  
    int i,j,s,size;
    printf("Enter the size:");
    scanf("%d",&size);
    for(i=size;i>=1;i--){
        for(j=0;j<=size*i;j++){
                printf("*");
        }
        printf("\n");
    }
}