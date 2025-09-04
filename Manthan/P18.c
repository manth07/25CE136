#include<stdio.h>

int main()
{
    int k;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=5;j++)
        {
            k=i*j;
            printf("%3d  ",k);
        }
        printf("\n");
    }
}
