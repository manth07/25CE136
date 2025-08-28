#include<stdio.h>

int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%10==0)
        {
            printf("Current Water Level: %d\n",i);
        }

    }
    printf("Tank is FULL!");
}
