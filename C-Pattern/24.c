#include<stdio.h>
 int main(){
     int n,i,j;
     int num =1;
     int dir =1;
     printf("Enter the value");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
         if(i%2==0){
            for (int j = i; j >= 1; j--) {
                printf("%d\t", num);
                num++;
            }
        }else{
            for (int j = 1; j <= i; j++) {
                printf("%d\t", num);
                num++;
            }
        }printf("\n");
     }
     
 }
 

 