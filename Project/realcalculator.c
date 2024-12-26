#include<stdio.h>


void add(int a, int b){


 printf("Sum is %d", a+b);
}

void sub(int a, int b){


 printf("Diffrence is %d", a-b);
}
void multiply(int a,int b){
printf("multiplying result is %d",a*b);
}
void division(float a,float b){
    printf("division result is %f",a/b);
}
void modulus(int a,int b){
    printf("modulus result is %d",a % b);
}
void main(){
    int a,b;
     int input1, input2;
    printf("press 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for modulus%\n");
    printf("press 0 for the exit \n");

    printf("enter the choice:");
    scanf("%d", &a);
       
    switch (a)
    {
    case 1:
      
     printf("Enter your 1st Input:");

      scanf("%d",&input1);
      printf("Enter your 2nd Input:" );

      scanf("%d",&input2);
        
       add(input1, input2);
      
        
        break;

        case 2:
      
     printf("Enter your 1st Input:");

      scanf("%d",&input1);
      printf("Enter your 2nd Input:" );

      scanf("%d",&input2);
        
       sub(input1, input2);
      
        
        break;
        case 3:
        printf("enter your 1st input:");
        scanf("%d",&input1);
        printf("enter your 2nd input:");
        scanf("%d",&input2);
        multiply(input1,input2);
        break;
        case 4:
        printf("enter your 1st input:");
        scanf("%f",&input1);
        printf("enter your 2nd input:");
        scanf("%f",&input2);
        division(input1,input2);
        break;
        case 5:
        printf("enter your 1st input:");
        scanf("%d",&input1);
        printf("enter your 2nd input:");
        scanf("%d",&input2);
        modulus(input1,input2);
        break;
    default:
        printf("exit");
        break;
    }

}