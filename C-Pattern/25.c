#include<stdio.h>
int main(){
     int n,i,j;
     int num =1;
     printf("Enter the value");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=1;j<=i;j++){
                printf("%d\t",num);
                num++;
            }
        }else{
            for(j=i;j>=1;j--){
                printf("%d\t",num);
                num++;
            }
        }printf("\n");
    }
}
        
 

 