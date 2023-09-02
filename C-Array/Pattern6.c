// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n=5,s,j;
    for(i=1;i<=5;i++){
        for(s=0;s<=5-i;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }
    for(i=5-1;i>=1;i--){
        for(s=0;s<=5-i;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }
}