#include <stdio.h>
void main()
{
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a > b)
    {

        if (a > c)
        {
            printf("a");
        }

        else if(a==c){
            printf("a and c are equal and both are greater");
        }
        else
        {
            printf("c");
        }
    }

    else if (a == b)
    {

        if (a > c)
        {
            printf("a and b are equal and both are greater");
        }

        else
        {
            printf(" c is greater");
        }
    }

    else
    {

        if (b > c)
        {
            printf("b is greater");
        }

         else if(b==c){
            printf("b and c are equal and both are greater");
        }

        else
        {
            printf("c is greater");
        }
    }
}