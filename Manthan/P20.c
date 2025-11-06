#include<stdio.h>
void main()
{
    int i,n,present=0,expected,missing;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n-1];

    for(i=0;i<n-1;i++)
    {
        printf("Enter arr[%d] = ",i);
        scanf("%d",&arr[i]);
        present=present+arr[i];
    }

    expected=(n*(n+1))/2;
    missing=expected-present;
    printf("The missing ID is: %d\n",missing);
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
}

