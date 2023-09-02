/*5.Write a program to show the grade obtained by a student after they enter their total mark percentage.
The program should accept input from the user and display their grade as follows
Mark            Grade
> 90            A
80-89           B
70-79           C
60-69           D
50-59           E
< 50            Failed

Variable        Data type
Total mark      float
*/
#include<stdio.h>
int main(){
    float totalmark;
    printf("Enter the total marks:");
    scanf("%f",&totalmark);
    if(totalmark>=90-1){
        printf("Grade A");
    }else if(totalmark>=80){
        printf("Grade B");
    }else if(totalmark>=70){
        printf("Grade C");
    }else if(totalmark>=60){
        printf("Grade D");
    }else if(totalmark>=50){
        printf("Grade E");
    }else{
        printf("Failed");
    }
}

