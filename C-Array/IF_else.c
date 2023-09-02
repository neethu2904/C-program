/*4.Write a program to check whether a student has passed or failed in a subject after
he or she enters their mark (pass mark for a subject is 50 out of 100).
The program should accept input from the user and output a message as “Passed” or “Failed.”

Variable    Data type
mark        float
*/

#include<stdio.h>
int main()
{
    float marks;
    printf("Enter the marks:");
    scanf("%f",&marks);
    if(marks>100){
        printf("Please enter a valid mark");
    }
    else if(marks>=50){
        printf("Passed");
    }else{
        printf("Failed");
    }
}
