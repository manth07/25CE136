#include<stdio.h>
int main()
{
    double tp,tm,tw,tlp,tlm,tlw,tilm,tilw;
    tp=1441981744;
    printf ("Total Population is: %.0lf\n",tp);

    tw=tp*0.484;
    printf("Total number of Women: %.0lf\n",tw);

    tm=tp-tw;
    printf("Total number of Men: %.0lf\n",tm);

    tlp=tp*0.8595;
    printf("Total Literate Population: %.0lf\n",tlp);

    tlm=tm*0.8095;
    printf("Total Literate Men: %.0lf\n",tlm);

    tlw=tw*0.6284;
    printf("Total Literate Women: %.0lf\n",tlw);

    tilm=tm-tlm;
    printf("Total Illiterate Men: %.0lf\n",tilm);

    tilw=tw-tlw;
    printf("Total Illiterate Women: %.0lf\n",tilw);
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
    return 0;
}

