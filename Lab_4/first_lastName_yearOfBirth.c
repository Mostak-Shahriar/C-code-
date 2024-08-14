#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];
    int yearOfBirth;
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    printf("Enter your year of birth: ");
    scanf("%d", &yearOfBirth);

    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    printf("Year of Birth: %d\n", yearOfBirth);
    return 0;
}
