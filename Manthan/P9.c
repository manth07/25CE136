#include<stdio.h>
int main()
{
    float tm,d,a;

    printf("Enter total amount:");
    scanf("%f",&tm);

    if(tm>=0)
    {
        if(tm<1000)
        {
            a=tm;
            d=0;
            printf("You are not eligible for discount\n");
            printf("Discount: %.2f\n",d);
            printf("Amount to be paid: %.2f",a);
        }
        else if(tm>=1000 && tm<=5000)
        {
            a=tm-(tm*0.1);
            d=tm*0.1;
            printf("You are eligible for 10%% discount!\n");
            printf("Discount: %.2f\n",d);
            printf("Amount to be paid: %.2f",a);
        }
        else if(tm>5000)
        {
            a=tm-(tm*0.2);
            d=tm*0.2;
            printf("You are eligible for 20%% discount!\n");
            printf("Discount: %.2f\n",d);
            printf("Amount to be paid: %.2f",a);
        }
        else
        {
            printf("Error");
        }
    }
    else
    {
        printf("Invalid amount");
    }
}
