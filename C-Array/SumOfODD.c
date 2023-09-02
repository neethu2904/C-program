/*Write a program to find the sum of all the odd numbers for a given limit
Program should accept an input as limit from the user and display the sum of all the odd numbers within that limit
For example if the input limit is 10 then the result is 1+3+5+7+9 = 25
Output: Enter a limit
Input: 10
Output: Sum of odd numbers = 25 
*/

#include<stdio.h>
void main(){
    int limit,Sum=0,i;
    printf("Enter a limit:");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        if(i%2!=0){
            Sum= Sum+i;
        }
    }
    printf("Sum of odd numbers is %d",Sum);
}