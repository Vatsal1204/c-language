#include<stdio.h>
void main(){
    int a;
    printf("press 1 for english:\n");
    printf("press 2 for hindi:\n");
    printf("press 3 for gujarati:\n");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("internet recharge");
            break;
        case 2:
            printf("top-up recharge");
            break;
        case 3:
            printf("special recharge");
            break;
            default:
            printf("end the call");

    }
}