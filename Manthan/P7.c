#include <stdio.h>
int main()
{
  int a,f;
  printf("Enter Age: ");
  scanf("%d",&a);
  if(a<=12)
    {
      printf("Children\n");
      printf("Ticket Fare: 0");
      return 1;
    }
  else if(a<60)
    {
      printf("Adult\n");
      printf("Ticket Fare: 300");
      return 1;
    }
  else if(a<120)
    {
    printf("Senior Citizen\n");
    printf("Ticket Fare: 0 ");
    return 1;
    }
  else 
    {
      printf("You are DEAD");
      return 0;
    }
}
