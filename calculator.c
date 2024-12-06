#include<stdio.h>
void main(){
    int a;
    printf("enter a number less than or equal to 100:");
    scanf("%d",&a);
    if(90<a<=100){
        printf("excellent work:A");
    }
        else if(80<a<90){
        printf("good work:B");
        }
        else if(70<a<80){
            printf("good but try hard:C");
        }
        else if (60<a<70){
            printf("average work:D");
        }
        else if(40<a<60){
            printf("bad work:E");
        }
        else{
            printf("fail:F");
        }
    }
