
#include <stdio.h>

struct book
{
    char title[100];
    char author[100];
    int price;
    int status;
};

int main()
{
    struct book books[50];
    int choice;
    int count = 0;

    while (1)
    {
        printf("1. ENTER BOOK INFO\n");
        printf("2. SHOW BOOKS INFO\n");
        printf("3. EXIT\n");
        printf("enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("ENTER BOOK TITLE : ");
            fgets(books[count].title, 100, stdin);

            printf("ENTER AUTHOR NAME : ");
            fgets(books[count].author, 100, stdin);

            printf("ENTER BOOK PRICE : ");
            scanf("%d", &books[count].price);

            printf("ENTER 1 FOR ISSUED AND 0 FOR AVILABLE");
            printf("AVAILABLE OR NOT : ");
            scanf("%d", &books[count].status);

            count++;
        }

        case 2:
        {
            printf("BOOKS INFORMATION : \n\n");
            for (int i = 0; i <= count; i++)
            {
                printf("\n\nBOOK TITLE : ");
                puts(books[i].title);
                printf("\nBOOK AUTHOR : ");
                puts(books[i].author);
                printf("\nBOOK PRICE : %d", books[i].price);
                printf("\nBOOK STATUS : ");

                if (books[i].status == 0)
                    printf("AVAILABLE");

                else
                    printf("ISSUED");
            }
        }

        case 3:
        {
            printf("EXITING PROGRAMM......");
            break;
        }
        }
    }
    return 0;
}
