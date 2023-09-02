#include <stdio.h>

int main()
{
    int i,j,limit;
    printf("limit");
    scanf("%d",&limit);
    for(j=1;j<=limit;j++){
        for(i=1;i<=j;i++){
            printf("*");
        }
    printf("\n");
    }
}
