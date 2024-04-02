#include<stdio.h>
void namaste();
void bonjour();
int main(){
       char ch;
       printf("Enter F for french and I for indian: ");
       scanf("%c",&ch);
       if(ch == 'f'){
             bonjour();
       }
       else{
              namaste();
       }

}
void namaste(){
       printf("Namaste \n");
}
void bonjour(){
       printf("Bonjour \n");
}