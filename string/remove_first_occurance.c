#include <stdio.h>
#include <string.h>

void replaceFirstOccurrence(char *str, char from, char to) {
    // Iterate through the string to find the first occurrence of 'from'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == from) {
            str[i] = to;  // Replace 'from' with 'to'
            return;       // Exit the function after replacement
        }
    }
}

int main() {
    char str[1000];
    char from, to;

    // Input string from user
    printf("Enter the input string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character
    
    // Input character to replace
    printf("Enter the character to replace:\n");
    scanf(" %c", &from);

    // Input character to replace with
    printf("Enter the character to replace with:\n");
    scanf(" %c", &to);

    // Replace the first occurrence of 'from' with 'to'
    replaceFirstOccurrence(str, from, to);

    // Output the modified string
    printf("String after replacing '%c' with '%c':\n%s\n", from, to, str);

    return 0;
}
