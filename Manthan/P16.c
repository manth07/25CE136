#include<stdio.h>

int main()
{
    int us,cs,sticks;
    sticks=21;

    while(1)
    {
        printf("Select the number of sticks:");
        scanf("%d",&us);
        if(us>0&&us<5)
        {
            if(us==4)
            {
                printf("User selected 4 sticks\n");
                printf("Computer selected 1 stick\n");
                sticks=sticks-5;
            }
            else if(us==3)
            {
                printf("User selected 3 sticks\n");
                printf("Computer selected 2 sticks\n");
                sticks=sticks-5;
            }
            else if(us==2)
            {
                printf("User selected 2 sticks\n");
                printf("Computer selected 3 sticks\n");
                sticks=sticks-5;
            }
            else if(us==1)
            {
                printf("User selected 1 sticks\n");
                printf("Computer selected 4 sticks\n");
                sticks=sticks-5;
            }
            if(sticks==1)
            {
                printf("User selected 1 stick");
                printf("\nComputer won!");
                break;
            }
        }
        else
        {
            printf("Please choose number of sticks between 1 to 4");
        }
    }
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
    return 0;
}

