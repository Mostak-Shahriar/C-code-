#include <stdio.h>

int main() {
    int employeeID, presentDays;
    float amountPerDay, salary;
    printf("Enter employee's ID: ");
    scanf("%d", &employeeID);

    printf("Enter present days in the month: ");
    scanf("%d", &presentDays);

    printf("Enter amount received per day: ");
    scanf("%f", &amountPerDay);

    salary = presentDays * amountPerDay;

    printf("Employee ID: %d\n", employeeID);
    printf("Salary for the month: $%.2f\n", salary);
    return 0;
}

