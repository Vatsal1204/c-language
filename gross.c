#include<stdio.h>
void main(){
    int a,b,c,d,e;
    printf("enter the base salary:",a);
    scanf("%d",&a);
    b=(10*a)/100;
    c=(5*a)/100;
    d=(15*a)/100;
    e=a+b+c+d;
    printf("the gross salary is:%d\n",e);
}