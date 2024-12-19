#include<stdio.h>
void main(){
    int arr[3][3]={{6,9,4},{5,8,4},{7,4,2}};
    // printf("arr[0][0]=%d",arr[0][0]);
    int a=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            // printf("%d ",arr[i][j]);

            a= a+arr[i][j];
        }
    }


    printf("sum of the array is :%d ",a);
} 