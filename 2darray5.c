#include<stdio.h>
void main(){
    int arr[5][5];
    int i,j,sum=0;
printf("enter the elements of the array:");
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
        }}
        printf("boundry elements are:");
        for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        if(i==0 || i==4 || j==0 || j==4)
 
        printf("%d \n",arr[i][j]);
        sum+=arr[i][j];
        
        printf("sum of boundry elements is:%d \n",sum);
}
