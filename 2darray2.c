#include <stdio.h>

void main() {
    int size, i;
    float average, result = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter elements of array 1:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
        result += arr1[i] + arr2[i]; 
    }

    average = result / (2*size); 
    printf("Average of elements is: %.2f\n", average);
}
