#include<stdio.h>
void target(char str[],char target);
int main(){
    char str[] = "Hello";
    target(str,'o');    
    return 0;
}
void target(char str[],char target){
    for (int i = 0; str[i]!='\0'; i++)
    {
        if(str[i] == target){
            printf("Chracter is present");
            return;
        }
        i++;
    }
            printf("Chracter is not present");


    
}