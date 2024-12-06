#include<stdio.h>
void main(){
    int a;
    printf("enter a number less than or equal to 100:");
    scanf("%d",&a);
    if(a>90 && a<=100){
        printf("excellent work:grade A");
    }
        else if(a>80 && a<=90){
        printf("good work:grade B");
        }
        else if(a>70 && a<=80){
            printf("good but try hard:grade C");
        }
        else if (a>60 && a<=70){
            printf("average work:grade D");
        }
        else if(a>=40 && a<=60){
            printf("bad work:grade E");
        }
        else{
            printf("fail:F");
        }
    }

