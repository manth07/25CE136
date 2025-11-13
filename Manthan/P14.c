#include<stdio.h>
int main()
{
    int wa,tb,choice;
    tb=5000;
    printf("Your Total Balance is: %d\n",tb);
    do
    {

        printf("Choice 1: Withdraw \nChoice 2: Exit\n");
        printf("Enter Choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            printf("Enter the amount to be withdrawn:");
            scanf("%d",&wa);
            if (wa<=tb && wa>0)
            {
                printf("%d Rs are deducted \n",wa);
                printf("Remaining balance is %d \n",tb=tb-wa);

                printf("Choice 1: Withdraw \nChoice 2: Exit\n");
                printf("Enter Choice: \n");
                scanf("%d",&choice);

                if(tb==0)
                {
                    printf("You cannot withdraw anymore\n");
                }
            }
            else
            {
                printf("Balance is not sufficient\n");
            }
            break;

        case 2:

            printf("Thanks for the visit");
            break;
        }
    }while(choice!=2);

    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
    return 0;

}
