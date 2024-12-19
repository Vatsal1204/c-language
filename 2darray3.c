#include<stdio.h>
void main(){
    int rows,colms;
    printf("enter number of rows :");
    scanf("%d",&rows);
    printf("enter number of columns: ");
    scanf("%d",&colms);
    int arr1[rows][colms],arr2[rows][colms],result[rows][colms];
    printf("enter number of elements in array1 :\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
         printf(" element %d%d",i+1,j+1);
         scanf("%d",&arr1[i][j]);
         
        }
    }

    printf("enter number of elements in array2 :\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
         printf(" element %d%d",i+1,j+1);
         scanf("%d",&arr2[i][j]);
         
        }
    }
    printf("resultant array is :\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}