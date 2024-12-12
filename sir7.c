#include <stdio.h>
int main() {
    int rows = 5; 
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
        
            if (i == 1 || j == 1 || (i == 3 && j < 5) || (i == 2 && j == 5)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}