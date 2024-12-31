#include<stdio.h>
#include<string.h>
void main(){
char str[100];


printf("enter the string:");
// fgets(str);
gets(str);
int length=strlen(str);

printf("length of string is :%d",length);

}