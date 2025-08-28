#include<stdio.h>
int main()
{
    int wa,tb,c;
    tb=5000;
    printf("Your Total Balance is: %d\n",tb);
    while(1)
    {

        printf("Choice 1: Withdraw \nChoice 2: Exit\n");
        printf("Enter Choice: \n");
        scanf("%d",&c);

        if(c==1)
        {
            printf("Enter the amount to be withdrawn:");
            scanf("%d",&wa);
            if (wa<=tb && wa>0)
            {
                printf("%d Rs are deducted \n",wa);
                printf("Remaining balance is %d \n",tb=tb-wa);

                printf("Choice 1: Withdraw \nChoice 2: Exit\n");
                printf("Enter Choice: \n");
                scanf("%d",&c);

                if(tb==0)
                {
                    printf("You cannot withdraw anymore\n");
                    break;
                }
        }
            else
            {
                printf("Balance is not sufficient\n");
            }
        }
        else if(c==2)
        {
            printf("Thanks for the visit");
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }

    }

}
