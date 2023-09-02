/******************************************************************************
 Read the word “Crossroads” from the user and Print the word “Crossroads” Less Than 8 times 
 without using any loop or goto statement..

*******************************************************************************/

#include <stdio.h>

void display(int flag,char word[100]);
int main()
{
    char word[100];
    int flag=7;
    printf("Enter the word");
    scanf("%s",word);
    display(flag,word);
    
}
void display(int flag,char word[100]){
    if(flag>=0){
        printf("%s\n",word);
        display(flag-1,word);
    }
}
