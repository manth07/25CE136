#include <stdio.h>
#include <string.h>

#define MAX 100

struct Coach {
    char name[50];
    int age;
    int experience;
};

struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

int main() {
    struct Team teams[MAX];
    int count = 0;
    int choice;
    char keyword[50];
    int i, found;

    do {
        printf("\n===== CHARUSAT Sports Team Management =====\n");
        printf("1. Add New Team\n");
        printf("2. Search for a Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX) {
                    printf("cannot add more teams.\n");
                    break;
                }

                printf("Enter Team Name: ");
                scanf("%s", teams[count].teamName);

                int duplicate = 0;
                for (i = 0; i < count; i++)
                {
                    if (strcmp(teams[i].teamName, teams[count].teamName) == 0)
                    {
                        printf("Team already exists!\n");
                        duplicate = 1;
                        break;
                    }
                }
                if (duplicate)
                {
                    printf("enter other team");

                    break;
                }

                printf("Enter Sport Type: ");
                scanf("%s", teams[count].sportType);
                printf("Enter Coach Name: ");
                scanf("%s", teams[count].coach.name);
                printf("Enter Coach Age: ");
                scanf("%d", &teams[count].coach.age);
                printf("Enter Coach Experience: ");
                scanf("%d", &teams[count].coach.experience);

                count++;
                printf("Team added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No teams to search.\n");
                    break;
                }
                printf("Enter Team Name or Sport Type: ");
                scanf("%s", keyword);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (strcmp(teams[i].teamName, keyword) == 0 || strcmp(teams[i].sportType, keyword) == 0) {
                        printf("\nTeam Name: %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Coach Experience: %d\n", teams[i].coach.experience);
                        found = 1;
                    }
                }
                if (!found)
                    printf("No team found.\n");
                break;

            case 3:
                if (count == 0) {
                    printf("No records to display.\n");
                } else {
                    for (i = 0; i < count; i++) {
                        printf("\nTeam #%d\n", i + 1);
                        printf("Team Name: %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Coach Experience: %d\n", teams[i].coach.experience);
                    }
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
