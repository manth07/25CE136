#include<stdio.h>
#include<dos.h>

int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%10==0)
        {
            printf("Current Water Level: %d\n",i);
            sleep(1);
        }

    }
    printf("Tank is FULL!");
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
    return 0;
}

