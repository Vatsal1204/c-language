#include<stdio.h>
void main(){
    char str[100]; 
    int start,end,isPalindrome=1;
    printf("enter the string:");
    scanf("%s",&str);
        for(end=0;str [end] !='\0';end++);
    for (start = 0; start < end; start++, end--) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }