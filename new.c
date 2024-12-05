#include <stdio.h>
 main(){
int a;

printf("if you wants to continue in english then press 1\n");
printf("if you wants to continue in english then press 2\n");
printf("if you wants to continue in english then press 3\n");
printf("otherwise you can go with default language\n");
scanf("%d",&a);


     switch(a){

     case 1:

        printf("user wants to continue in english");
        break;

  case 2:

    printf("user wants to continue in hindi");
 
      break;

      
  case 3:

    printf("user wants to continue in gujarati");
 
      break;

     

     default:

       printf("user do not want to continue");

     }


}