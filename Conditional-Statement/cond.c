#include <stdio.h>
int main()
{
       int age;
       printf("Enter age: ");
       scanf("%d", &age);

       // if (age > 18)
       // {
       //        printf("Adult \n");
       //        printf("They can vote \n");
       //        printf("They can driving \n");
       // }

       // else
       // {
       //        printf("Not adult \n");
       // }

       // Ternary operator
       age >= 18 ? printf("Adult") : printf("Not adult");
       return 0;
}