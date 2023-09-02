/*Write a program to print the following pattern (hint: use nested loop)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/


#include<stdio.h>
void main(){
    int limit;
    printf("enter the number:");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");
    }
}