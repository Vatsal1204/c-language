#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<b){
        if(a<c){
        printf("a is minimum");
        }
        else if (a>c){
            printf("c is minimum");
        }
        else{
        printf("a and c are minimum");
                }
            
        } else if(a==b){
        if(b<c){
            printf("a and b are minimum");
        }
            else if(b>c)
            {
                printf("c is minimum");
            }
                else{
                    printf("a,b and c are same and minimum");

                }
            
        
    }
    else
    {
        if(b>c)
        {
            printf("c is minimum");
        }
            else if (b<c)
            {
                printf("b is minimum");
            }
                else{
                    printf("b and c are minimum");
                }
            }
        }

    
       
    

