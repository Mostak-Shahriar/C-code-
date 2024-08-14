#include <stdio.h>
int main() {
    int totalDistance;
    float fuelSpent, mileage;
    printf("Enter total distance traveled (in km): ");
    scanf("%d", &totalDistance);

    printf("Enter fuel spent (in liters): ");
    scanf("%f", &fuelSpent);
    mileage = totalDistance / fuelSpent;
    printf("The bike's mileage is %.2f km/l\n", mileage);

    return 0;
}
