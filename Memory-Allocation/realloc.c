#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    printf("Enter a number(5): ");
    for (int i = 1; i < 5; i++)
    {
        scanf("%d \n",&ptr[i]);
    }
    ptr = realloc(ptr,8);
    printf("Enter a number(8): ");
     for (int i = 1; i < 8; i++)
    {
        scanf("%d \n",&ptr[i]);
    }
     for (int i = 1; i < 8; i++)
    {
        printf("number: %d is %d\n",i,ptr[i]);
    }

    
    return 0;
}