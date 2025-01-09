#include<stdio.h>
int main(){
    int num,first_digit,last_digit,sum;
    printf("enter the 3 digit number:");
    scanf("%d",&num);
    if(num<99 || num>999){
    printf("enter a valid 3 digit number!");
     }
   
    last_digit= num%10;
    while(num>10){

    num= num/10;
    }

    first_digit=num;
    printf("%d\n",first_digit);
    printf("%d",last_digit);
    sum=first_digit+last_digit;
    printf("\nsum of digits is :%d",sum);
}