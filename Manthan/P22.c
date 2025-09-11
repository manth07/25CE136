#include<stdio.h>
int main()
{
    char seating[5][10];
    int i,j,reserved_seats,row,seat;
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            seating[i][j]='0';
        }
    }
    printf("Welcome to Theater Seating Arrangement\n");
    printf("Enter the number of reserved seat: ");
    scanf("%d",&reserved_seats);

    for(i=1;i<=reserved_seats;i++)
    {
        printf("Enter the row and seat number for reserved seat %d(eg. 2 5):",i);
        scanf("%d %d",&row,&seat);
        if(row>1 && row<=5 && seat>1 && seat<=10)
        {
            seating[row-1] [seat-1]='X';
        }
        else
        {
            printf("Invalid row or seat number.Please enter a valid one\n");
            i--;
        }

    }
    printf("\nSeating Chart:\n");
    for(i=0;i<5;i++)
    {
        printf("Row %d:",i+1);
        for(j=0;j<10;j++)
        {
                printf("%3c",seating[i][j]);

        }
        printf("\n");
    }

    return 0;
}
