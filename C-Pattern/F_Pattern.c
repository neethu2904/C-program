//F Pattern
#include <stdio.h>

int main()
{
    int size,i,j;
    int k,m;
     printf("Enter the size:");
     scanf("%d",&size);
     for(i=1;i<=size;i++){
         for(j=1;j<=2*i;j++){
                printf("* ");
         }
	printf("\n");
         for(k=1;k<=3*i;k++){
		if(i==size){
			break;
		}else{
                	printf("*\n");
		}
         }
     }
 }
     
