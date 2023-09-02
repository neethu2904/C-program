/*Using the ‘switch case,’ write a program to accept an input number from the user
and output the day as follows.
Input   Output
1       Sunday
2       Monday
3       Tuesday
4       Wednesday
5       Thursday
6       Friday
7       Saturday
Any other   input Invalid Entr*/
#include<stdio.h>
int main(){
    int choice;
    printf("Enter your choice from 1-7:\t");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Enter a valid number");
    }
    
}