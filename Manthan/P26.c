
#include <stdio.h>
#include <math.h>

int isvalidtriangle(float a, float b, float c)
{
    return (a + b > c && a + c > b && b + c > a);
}

float calculatearea(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float area = sqrtf(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main()
{
    float a, b, c;

    // Input handled only in main
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    if (isvalidtriangle(a, b, c))
    {
        float area = calculatearea(a, b, c);
        printf("The sides form a valid triangle.\n");
        printf("The area of the triangle is: %.2f square units.\n", area);
    }
    else
    {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}

