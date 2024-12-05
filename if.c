#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a<b)
    {
        if(a<c)
        printf("a are minimum");
        else if(a==b)
        { 
            printf("a and b are minimum");
       }
        else{
            printf("c is minimum");
        }

    }

    else if (b<c)
    {
        if (b<a)
        printf("b is minimum");
        else if (b==c){
            printf("b and c are minimum");

        }
        else{
            printf("a is minimum");
        }
    }
    else{

    
    if (b < c)
        {
            printf("b is minimum");
        }

         else if(b==c){
            printf("b and c are equal and both are minimum");
        }

        else
        {
            printf("c is minimum");
        }
    }
    }


