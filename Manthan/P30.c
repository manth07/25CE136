#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j;
    float *p,*q,*t;

    printf("Enter the no. of items: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("No items\n");
        return 0;
    }
    p=(float *)calloc(n,sizeof(float));
    t=p;

    for(i=1;i<=n;i++,p++)
    {
        printf("Enter the price of item %d: ",i);
        scanf("%f",p);
    }
    p=t;

    for(i=1;i<n;i++,p++)
    {
        for(j=i+1,q=p+1;j<=n;j++,q++)
        {
            if(*p>*q)
            {
                *p=*p+*q;
                *q=*p-*q;
                *p=*p-*q;
            }
        }
    }

    printf("Prices in ascending order are:\n");
    for(i=1;i<=n;i++,t++)
    {
        printf("\n%.2f ",*t);
    }
    free(t);
    free(p);
    free(q);

printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
}

