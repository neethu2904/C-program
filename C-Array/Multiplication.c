/*7.Write a program to print the multiplication table of given numbers.
Accept input from the user and display its multiplication table
E.g.: 
Output: Enter a number
Input: 5
Output: 
1 x 5 = 5
2 x 5 = 10
3 x 5 = 15
4 x 5 = 20
5 x 5 = 25
6 x 5 = 30
7 x 5 = 35
8 x 5 = 40
9 x 5 = 45
10 x 5 = 50

*/

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the num:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}