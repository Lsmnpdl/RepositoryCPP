#include<stdio.h>

int main()
{
    int a=10;
    int *ptr=&a;

    printf("a:%d\n",a);             //Prints value stored at a
    printf("&a:%d\n",&a);           //Prints address of a
    printf("ptr:%d\n",ptr);         //Prints address pointed by ptr i.e. address of a
    printf("*ptr:%d\n",*ptr);       //Prints dereferenced value from pointed address i.e. value of a
    printf("&ptr:%d\n",&ptr);       //Prints address of ptr

   // printf("&&ptr:%d\n",&&ptr);     //Invalid case
   // printf("**ptr:%d\n",**ptr);     //Invalid case
    printf("&*ptr:%d\n",&*ptr);     //Prints address of a
    printf("*&ptr:%d\n",*&ptr);     //Prints value stored at ptr 






    

    return 0;
}