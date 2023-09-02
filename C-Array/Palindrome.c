/*Write a program to identify whether a string is a palindrome or not
A string is a palindrome if it reads the same backward or forward eg: MALAYALAM
Program should accept a string and display whether the string is a palindrome or not
Eg: Output: Enter a string
Input: MALAYALAM
Output: Entered string is a palindrome
Eg 2: Output: Enter a string
Input: HELLO
Output: Entered string is not a palindrome*/

#include<stdio.h>
#include<string.h>
void main(){
    char s[20];
    int i,flag=0,n;
    printf("Enter a String");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Palindrome");
    }else{
        printf("Non-Palindrome");
    }
}