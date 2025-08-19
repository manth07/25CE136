#include<stdio.h>

int main()
{
    double c,f;
    printf("Enter the temperature in celsius: ");
    scanf("%l f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit is: %.2lf",f);

}
