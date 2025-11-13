#include <stdio.h>

int main() {
    int choice;
    char s[1000], r[1000], b[1000], copy[1000];
    char str1[1000], str2[1000], str[2000];
    char low[1000], upper[1000], cap[1000];
    int i, length = 0, len = 0, len1 = 0, len2 = 0, equal;

    do {
        printf("\nChoice 1:Length of the note\n");
        printf("Choice 2:Reverse note\n");
        printf("Choice 3:Compare two notes\n");
        printf("Choice 4:Copy a note\n");
        printf("Choice 5:Concatenate a note\n");
        printf("Choice 6:Upper case converter\n");
        printf("Choice 7:Lower case converter\n");
        printf("Choice 8:Capitalize word\n");
        printf("Choice 9:Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", s);
                length = 0;
                for (i = 0; s[i] != '\0'; i++) {
                    length = i + 1;
                }
                printf("Length of the string: %d\n", length);
                break;

            case 2:
                if (length == 0) {
                    printf("Please enter a string first (Choice 1).\n");
                    break;
                }
                for (i = 0; i < length; i++) {
                    r[i] = s[length - 1 - i];
                }
                r[length] = '\0';
                printf("\nThe reverse of the note is: %s\n", r);
                break;

            case 3:
                if (length == 0) {
                    printf("Please enter a string first (Choice 1).\n");
                    break;
                }
                printf("\nEnter another note: ");
                scanf("%s", b);
                len = 0;
                for (i = 0; b[i] != '\0'; i++) {
                    len = i + 1;
                }
                equal = 1;
                if (len == length) {
                    for (i = 0; i < length; i++) {
                        if (s[i] != b[i]) {
                            equal = 0;
                            break;
                        }
                    }
                } else {
                    equal = 0;
                }
                if (equal == 1) {
                    printf("Equal\n");
                } else {
                    printf("Not equal\n");
                }
                break;

            case 4:
                if (length == 0) {
                    printf("Please enter a string first (Choice 1).\n");
                    break;
                }
                for (i = 0; i < length; i++) {
                    copy[i] = s[i];
                }
                copy[length] = '\0';
                printf("\nThe copied note is %s\n", copy);
                break;

            case 5:
                printf("\nEnter first note: ");
                scanf("%s", str1);
                printf("\nEnter second note: ");
                scanf("%s", str2);
                len1 = 0;
                for (i = 0; str1[i] != '\0'; i++) {
                    len1 = i + 1;
                }
                len2 = 0;
                for (i = 0; str2[i] != '\0'; i++) {
                    len2 = i + 1;
                }
                for (i = 0; i < len1; i++) {
                    str[i] = str1[i];
                }
                for (i = 0; i < len2; i++) {
                    str[len1 + i] = str2[i];
                }
                str[len1 + len2] = '\0';
                printf("The combined notes are: %s\n", str);
                break;

            case 6:
                printf("\nEnter lowercase note: ");
                scanf("%s", low);
                for (i = 0; low[i] != '\0'; i++) {
                    if (low[i] >= 'a' && low[i] <= 'z')
                        low[i] = low[i] - 32;
                }
                printf("the uppercase of note is : %s\n", low);
                break;

            case 7:
                printf("\nEnter uppercase note: ");
                scanf("%s", upper);
                for (i = 0; upper[i] != '\0'; i++) {
                    if (upper[i] >= 'A' && upper[i] <= 'Z')
                        upper[i] = upper[i] + 32;
                }
                printf("the lowercase of note is : %s\n", upper);
                break;

            case 8:
                printf("\nEnter lowercase note: ");
                scanf("%s", cap);
                if (cap[0] >= 'a' && cap[0] <= 'z') {
                    cap[0] = cap[0] - 32;
                }
                printf("The capitalized note is: %s\n", cap);
                break;

            case 9:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 9);

    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136\n");

    return 0;
}
