#include<stdio.h>
void main(){
    int size,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum of the array elements: %d",sum);
    


}