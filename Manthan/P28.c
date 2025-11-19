#include <stdio.h>
#include <string.h>
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
    do
    {
        printf("1. Enter book info\n");
        printf("2. Show book info\n");
        printf("3. Exit\n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        while (getchar() != '\n');
        switch (choice)
        {
        case 1:
        {
            if (count >= 50)
            {
                printf("Library is full. Cannot add more books.\n");
                break;
            }
            printf("Enter book title : ");
            fgets(books[count].title, 100, stdin);
            books[count].title[strcspn(books[count].title, "\n")] = 0;
            printf("Enter author name: ");
            fgets(books[count].author, 100, stdin);
            books[count].author[strcspn(books[count].author, "\n")] = 0;
            printf("Enter book price : ");
            scanf("%d", &books[count].price);
            printf("Enter 1 for issued and 0 for available\n");
            printf("Available or not (0 or 1) : ");
            scanf("%d", &books[count].status);
            while (getchar() != '\n');
            count++;
            break;
        }
        case 2:
        {
            printf("\nBooks Information\n");
            if (count == 0)
            {
                printf("\nNo books in the library.\n");
            }
            for (int i = 0; i < count; i++)
            {
                printf("\n BOOK %d", i + 1);
                printf("\nBook Title : %s", books[i].title);
                printf("\nBook Author : %s", books[i].author);
                printf("\nBook Price : %d", books[i].price);
                printf("\nBook Status : ");
                if (books[i].status == 0)
                    printf("Available\n");
                else
                    printf("Issued\n");
            }
            break;
        }
        case 3:
        {
            printf("Exiting Program....\n");
            break;
        }
        default:
        {
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
            break;
        }
        }
    }while(choice!=3);
    printf("\nName: Manthan Vasoya\n");
    printf("ID:25CE136\n");
    return 0;
}
