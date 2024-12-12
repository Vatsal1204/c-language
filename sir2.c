#include <stdio.h>

int main() {
    int rows = 4, start = 11;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", start);
            start++;
        }
        printf("\n");
    }

    return 0;
}
