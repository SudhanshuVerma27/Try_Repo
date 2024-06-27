#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAlphabet(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Removing the newline character if present

    int left = 0;
    int right = strlen(str) - 1;
    int flag = 0;

    while (left < right) {
        while (left < right && !isAlphabet(str[left])) {
            left++;
        }

        while (left < right && !isAlphabet(str[right])) {
            right--;
        }

        char leftchar = toLower(str[left]);
        char rightchar = toLower(str[right]);

        if (leftchar != rightchar) {
            flag = 1;
            break;
        }

        right--;
        left++;
    }

    if (flag == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}

