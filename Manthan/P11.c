#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks(0-100): \n");
    scanf("%d",&a);
    if(a<=100&&a>=0)
    {
        (a>89)?printf("Your grade is A"):(a<90&&a>79)?printf("Your grade is B"):(a<80&&a>69)?printf("Your grade is C"):(a<70&&a>59)?printf("Your grade is D"):printf("You failed");
    }
   else
    printf("Invalid marks");
}
