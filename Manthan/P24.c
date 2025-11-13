#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int i,len,len2,ta,fl;
    char str[200],str2[200],ch='y';
    printf("Enter your jot down note here:");
    gets(str);
    while(ch=='y')
    {
        printf("\n\n\nENTER THE TASK TO PERFORM FROM BELOW:");
        printf("\n1.Length");
        printf("\n2.Reverse");
        printf("\n3.Compare two strings");
        printf("\n4.Copy to other");
        printf("\n5.Concatenate two");
        printf("\n6.Convert to upper case");
        printf("\n7.Convert to lower case");
        printf("\n8.Capitalize each words\n9.Exit\n");
        printf("\nenter the task id: ");
        scanf("%d",&ta);
        if(ta==1)
        {
            printf("Calculating length of your note!!\n");
            sleep(2);
            for(i=0;str[i]!='\0';i++);
            printf("%d is your length!!\n",i);
        }
        else if(ta==2)
        {
            printf("Doing reverse:\n");
            sleep(2);
            for(i=0;str[i]!='\0';i++);
            len=i;
            for(i=len-1;i>=0;i--)
                printf(" %c",str[i]);
            printf("\n");
        }
        else if(ta==3)
        {
            printf("Comparing 2 strings");
            printf("\nEnter the other string!");
            scanf(" %s",str2);
            fl=1;
            for(i=0;i<=200;i++)
            {
                if(str[i]!=str2[i])
                    fl=0;
            }
            if(fl=0)
                printf("NOT EQUAL");
            else
                printf("EQUAL");
        }
        else if(ta==4)
        {
            printf("Copying...\n");
            sleep(2);
            for(i=0;str[i]!='\0';i++)
                str2[i]=str[i];
            str2[i]='\0';
            printf("Copied string: %s",str2);
        }
        else if(ta==5)
        {
            printf("Enter the other string to concatenate");
            scanf("%s",str2);
            for(i=0;str[i]!='\0';i++);
            len=i;
            printf("concatenating....\n");
            sleep(2);
            for(i=0;str2[i]!='\0';i++)
                str[len+i]=str2[i];
            str[len+i]='\0';
            printf("New string:  %s",str);
        }
        else if(ta==6)
        {
            printf("Your string: %s",str);
            printf("\nConverting to upper case...\n");
            sleep(2);
            for(i=0;str[i]!='\0';i++)
                str[i]=toupper(str[i]);
            printf("Successfully converted to %s",str);
        }
        else if(ta==7)
        {
            printf("Your string: %s",str);
            printf("\nConverting to lower case...\n");
            sleep(2);
            for(i=0;str[i]!='\0';i++)
                str[i]=tolower(str[i]);
            printf("Successfully converted to %s",str);
        }
        else if(ta==8)
        {
            printf("Capitalizing each words...\n");
            sleep(2);
            for(i=0;str[i]!='\0';i++)
            {
                str[0]=toupper(str[0]);
                if(str[i]==' ')
                    str[i+1]=toupper(str[i+1]);
            }
            printf("Succesfully converted to %s",str);
        }
        else if(ta==9)
        {
            printf("Thank you!!\n");
            break;
        }
        else
        {
            printf("Enter valid choice!!\n");
        }
    }
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");

    return 0;
}
