#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);

    if(a>0)
    {
        if(a>=18)
        {
            printf("You are eligible to open savings account");

        }
        else
        {
        printf("You are not eligible to open savings account");
        }
    }
    else
    {
        printf("Invalid age");
    }
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
    return 0;
}

