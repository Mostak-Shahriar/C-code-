#include <stdio.h>
#include <math.h>
int main() {
    double number, squareRoot;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number >= 0) {
        squareRoot = sqrt(number);
        printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    } else {
        printf("Square root of a negative number is not defined.\n");
    }

    return 0;
}

