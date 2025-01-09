#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;

    for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++) {
            printf("- ");
        }
        for (k = 10 - i; k > 10 - n; k--) {
            printf("%d ", k);
        }printf("\n"); 
    }return 0;
}
