#include<stdio.h>
int main(){
    // char name[50];
    // scanf("%s",name);
    // printf("Your name is: %s ",name);

    // char fullname[50];
    // // Scanf multiple words not enter 
    // scanf("%s",fullname);
    // printf("Your full name is: %s",fullname);


    // gets() and puts()
    char name[100];
    gets(name);
    puts(name);

    // fgets()
     char str[100];
    fgets(str,100,stdin);
    puts(str);

    return 0;
}