#include<stdio.h>
void main()
{
    int arr[10],i,n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("The content of the Array is: \n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}
