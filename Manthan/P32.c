#include<stdio.h>

void main()
{
    FILE *f,*t;
    char ch;

    f=fopen("Note.txt","r");
    if(f==NULL)
        printf("cant't open file");
    else
    {
        fseek(f,-1,SEEK_END);
        while(1)
        {
            ch=fgetc(f);
            printf("%c",ch);
            if(fseek(f,-2,SEEK_CUR))
            {
                break;
            }
        }
    }
    fclose(f);
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
}



