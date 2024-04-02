#include<stdio.h>
int main(){
       char ch;
       printf("Enter character: ");
       scanf("%c",&ch);
       if(ch>='A' && ch <= 'Z'){
           printf("Upper case");
       }
       else if (ch >='a'&& ch <=  'z')
     {
       printf("Lower case");
       }
     else{
       printf("Not english letter");
     }
       
       
}