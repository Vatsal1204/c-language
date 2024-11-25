#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%D",&b);
    if(a>b)
    {
        printf("a is greater than b",a,b);

    }else{
        printf("b is greater than a",b,a);
    }


    printf("a and b are equal",a,b);
}