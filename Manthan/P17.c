#include<stdio.h>
#include<dos.h>
int main()
{
    float i=0,d;
    while(i<=20)
    {
        d=i*0.5;
        printf("Minute %.1f: Distance covered is %.1f KM\n",i,d);
        i++;
        sleep(1);
    }
    printf("Marathon is over");
}
