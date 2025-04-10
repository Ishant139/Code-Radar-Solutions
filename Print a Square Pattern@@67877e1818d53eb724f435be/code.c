#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    
    // Loop to print the square
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r; j++) {
            // Print '*' for the border and space for the inside
            if (i == 1 || i == r || j == 1 || j == r) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}