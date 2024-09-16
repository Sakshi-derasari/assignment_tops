#include <stdio.h>

int main() {
    int choice;
    char letter;

    printf("Choose an option:\n");
    printf("1. Display day of the week\n");
    printf("2. Check if a letter is a vowel or consonant\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            {
                int day;
                printf("Enter the day number (1-7): ");
                scanf("%d", &day);

                switch(day) {
                    case 1:
                        printf("Monday\n");
                        break;
                    case 2:
                        printf("Tuesday\n");
                        break;
                    case 3:
                        printf("Wednesday\n");
                        break;
                    case 4:
                        printf("Thursday\n");
                        break;
                    case 5:
                        printf("Friday\n");
                        break;
                    case 6:
                        printf("Saturday\n");
                        break;
                    case 7:
                        printf("Sunday\n");
                        break;
                    default:
                        printf("Invalid day number! Please enter a number between 1 and 7.\n");
                }
            }
            break;

        case 2:
            {
                printf("Enter a letter: ");
                scanf(" %c", &letter);

                switch(letter) {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U':
                        printf("%c is a vowel.\n", letter);
                        break;
                    default:
                        printf("%c is a consonant.\n", letter);
                }
            }
            break;

        default:
            printf("Invalid choice! Please enter either 1 or 2.\n");
    }
}
