#include<stdio.h>
void cubeArray(int *arr,int size){
    for  (int i=0;i<size;i++){
        *(arr+i)=(*(arr+i))*  *(arr+i) * *(arr+i);
    }
}
int main(){
    int n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

 cubeArray(arr,n);
 printf("cubed elements of array:\n");
 for(i=0;i<n;i++){
 printf("\n %d",arr[i]);
 }
 printf("\n");
 return 0;
 }



