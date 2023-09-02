/*Convert the lowercase characters in a word into uppercase
	Eg,
	      Input 	: Hello
	      Output	: HELLO
	      */
	      
#include<stdio.h>
#include<string.h>

int main(){
    char word[10],W;
    printf("Enter the word");
    scanf("%s",word);
    printf("%s",strupr(word));
}