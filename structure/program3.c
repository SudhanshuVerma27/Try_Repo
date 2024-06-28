#include <stdio.h>
#include <string.h>

struct inventory {
    char pid[10];
    int quantity;
} inven[10];

int main() {
    int n, y;
    char x[10];

    printf("Enter number of students:\n");
    scanf("%d", &n);
    getchar(); // Consume newline left in input buffer

    for (int i = 0; i < n; i++) {
        printf("Enter product id:\n");
        fgets(x, sizeof(x), stdin);
        x[strcspn(x, "\n")] = '\0'; // Remove newline character from fgets input

        printf("Enter quantity:\n");
        scanf("%d", &y);
        getchar(); // Consume newline left in input buffer

        int found = 0;
        
        // Check if sid already exists in studen array
        for (int j = 0; j < i; j++) {
            if (strcmp(inven[j].pid, x) == 0) {
                // Update score to be the average
                inven[j].quantity = (inven[j].quantity + y) ;
                found = 1; // Set found flag
                break;
            }
        }

        // If sid is not found in existing records, add it
        if (!found) {
            strcpy(inven[i].pid, x);
            inven[i].quantity = y;
        }
    }

    // Print the records
    printf("records:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", inven[i].pid, inven[i].quantity);
    }

    return 0;
}

