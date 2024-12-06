#include<stdio.h>
void main(){
    int a;
        printf("enter a number less or equal to 100:");
        printf("a>90");
        printf("a>75");
        printf("a>60");
        printf("a<35");
        scanf("%d",&a);
    switch(a){
        case 90:
        printf("excellent work:A");
        break;
        case 75:
        printf("good work:B");
        break;
        case 60:
        printf("average work:C");
        break;
        case 35:
        printf("fail:F");
        break;

    }
}