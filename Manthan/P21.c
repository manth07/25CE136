#include <stdio.h>
int main() {
    int num[25];
    int positiveC = 0;
    int negativeC = 0;
    int evenC = 0;
    int oddC = 0;
    printf("Enter 25 integers for the filter:\n");
    for (int i = 0; i < 25; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
        if (num[i] > 0) {
            positiveC++;
        } else if (num[i] < 0) {
            negativeC++;
        }

        if (num[i] % 2 == 0) {
            evenC++;
        } else {
            oddC++;
        }
    }
    printf("Total positive numbers are: %d\n", positiveC);
    printf("Total negative numbers are: %d\n", negativeC);
    printf("Total even numbers are: %d\n", evenC);
    printf("Total odd numbers are: %d\n", oddC);

    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");

    return 0;
}

