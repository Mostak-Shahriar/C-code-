#include <stdio.h>
#include <math.h>

int main() {
    float x, result;
    int y;
    printf("Enter the base (X): ");
    scanf("%f", &x);
    printf("Enter the exponent (Y): ");
    scanf("%d", &y);
    result = pow(x, y);
    printf("Result = %f ",result);
    return 0;
}

