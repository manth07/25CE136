#include<stdio.h>
#include<dos.h>

int main()

{
    int st,i;
    printf("Enter the starting time: ");
    scanf("%d",&st);

    for(i=st;i>=0;i--)
    {
        printf("%d\n",i);
        sleep(1);
    }
    printf("Time UP!");
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
    return 0;
}


