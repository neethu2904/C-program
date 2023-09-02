//Read a character from the user and find the ASCII code of that character?
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII code of '%c' is %d\n", ch, ch);

    return 0;
}
