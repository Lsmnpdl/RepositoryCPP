#include<stdio.h>

int main()
    {
        int num;
        printf("Enter any number:");
        scanf("%d",&num);
        if (num>0)
            {
                printf("Entered number %d is positive",num);
            }
        else 
            {
                printf("Enterd number %d is negative",num);
            }
    return 0;
    }