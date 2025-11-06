#include<stdio.h>
#include<conio.h>

void main()

{
     float h,w,b;

     clrscr();

     printf("Enter Height:");
     scanf("%f",&h);

     printf("Enter Weight:");
     scanf("%f",&w);

     if (h<=0)
     {
      printf("Invalid Height\n");
     }

     if(w<=0)
     {
      printf("Invalid Weight\n");
     }

     b=w/(h*h);
     printf("Your BMI is: %.2f \n",b);

     if(b<18.5)
     {
      printf("You are Under weight");
     }

     else if (b<=24.99)
     {
      printf("You are Normal weight");
     }

     else if (b<=29.99)
     {
      printf("You are Over weight");
     }
     else if (b>=30)
     {
      printf("You are Obese");
     }
printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
     getch();

}

