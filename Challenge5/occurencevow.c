#include<stdio.h>
int countVowel(char str[]);
int main(){
    char str[] = "Hello World";
    printf("Vowels are %d",countVowel(str));
    return 0;
}
int countVowel(char str[]){
    int count  = 0;
    for (int i = 0;str[i]!='\0'; i++)
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            count++;
        }
    }
    return count;
    
}
