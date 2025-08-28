#include<stdio.h>
int main()

{
    int st,i;
    printf("Enter the starting time: ");
    scanf("%d",&st);

    for(i=st;i>=0;i--)
    {
        printf("%d\n",i);
    }
    printf("Time UP!");
}

