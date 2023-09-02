#include<stdio.h>

int main(){
    int i,s,j,limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(s=1;s<=limit-i;s++){
            printf(" ");
        }
        for(j=1;j<=1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<limit;i++){
        for(s=1;s>=limit-1;s--){
            printf(" ");
        }
        for(j=1;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
}