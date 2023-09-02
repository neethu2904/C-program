// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,s,j,limit,num=5;
    printf("enter limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit;j++){
            if(i==j||i+j== num+1||j==1||i==1||j==limit||i==limit){
            printf("*");
            }else {
            printf(" ");
            }
        }printf("\n");
    }
    
}