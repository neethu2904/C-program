#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "MALAYALAM";

    for (int i = 1; i <= strlen(word); i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}
