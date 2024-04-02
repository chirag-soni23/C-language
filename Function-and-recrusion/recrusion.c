#include<stdio.h>
void printHelloworld(int count);
int main(){
       printHelloworld(5);
       return 0;

}
// recrusion function
void printHelloworld(int count){
       if(count == 0){
              return;
       }
       printf("Hello World \n");
       printHelloworld(count - 1);
}