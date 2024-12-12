#include<stdio.h>
void main(){
    int number,firstdigit,lastdigit;
    printf("enter number:");
    scanf("%d",&number);
    if(number<0){
        number=-number;

    }
    lastdigit=number%10;
    while (number>=10)
    {
        number=number/=10;

    }
    firstdigit=number;
    int sum=firstdigit+lastdigit;
    printf("sum of numbers is:",sum);
    return 0;


}