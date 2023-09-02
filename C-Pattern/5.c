#include<stdio.h>

int main(){
    int i,s,j,limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    for(i=5;i>=limit;i++){
        for(j=1;j>=i;j--){
            printf("%c",64+j);
        }
    
    }
}