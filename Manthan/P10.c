#include<stdio.h>
int main()
{
    int i,q,a1,a2,a3,a4,a5,ta;
    printf("Welcome to Foodies Restaurant \nPlease select items from the menu below\n");



    while(1)

    printf("1.Burger - ₹150\n");
    printf("2.Pizza - ₹200\n");
    printf("3.Pasta - ₹120\n");
    printf("4.Sandwich - ₹100\n");
    printf("5.French Fries - ₹80\n");
    printf("Enter item number: ");
    scanf("%d",&i);

    switch(i)
    {

        case 1:
        printf("You've selected Burger \n");
        printf("Enter quantity:");
        scanf("%d",&q);
        a1=q*150;
        printf("Item is added to your order\n");
        printf("Amount is: %d",a1);
        break;

        case 2:
        printf("You've selected Pizza \n");
        printf("Enter quantity:");
        scanf("%d",&q);
        a2=q*200;
        printf("Item is added to your order\n");
        printf("Amount is: %d",a2);
        break;

        case 3:
        printf("You've selected Pasta \n");
        printf("Enter quantity:");
        scanf("%d",&q);
        a3=q*120;
        printf("Item is added to your order\n");
        printf("Amount is: %d",a3);
        break;

        case 4:
        printf("You've selected Sandwich \n");
        printf("Enter quantity:");
        scanf("%d",&q);
        a4=q*100;
        printf("Item is added to your order\n");
        printf("Amount is: %d",a4);
        break;

        case 5:
        printf("You've selected French Fries \n");
        printf("Enter quantity:");
        scanf("%d",&q);
        a5=q*80;
        printf("Item is added to your order\n");
        printf("Amount is: %d",a5);
        break;

        case 0:

        ta=a1+a2+a3+a4+a5;
        printf("Your Total Amount is: %d",ta);
    }
    return 0;
}
