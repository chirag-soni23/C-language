#include<stdio.h>
#include<string.h>
typedef struct Bank{
    int accountNumber;
    char accountHolder[100];
} bank;
int main(){
    bank bank1 = {15,"Chirag Soni"};
          bank bank2 = {671,"Prakash kumar"};
    printf("Bank1 %s \n",bank1.accountHolder);
    printf("Bank2 %d",bank2.accountNumber);
    return 0;
}