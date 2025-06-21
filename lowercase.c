#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
        printf("Uppercase: %c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
        printf("Lowercase: %c\n", ch);
    }
    else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}