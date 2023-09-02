//Write a Program to copy one string to another without using String Functions?
#include <stdio.h>

void stringCopy(char s[], char S1[]) {
    int i = 0;
    while (s[i] != '\0') {
        S1[i] = s[i];
        i++;
    }
    S1[i] = '\0'; 
}

int main() {
    char s[100];
    char S1[100];

    printf("Enter a string: ");
    scanf("%s", s);

    stringCopy(s, S1);

    printf("Copied string: %s\n", S1);

    return 0;
}
