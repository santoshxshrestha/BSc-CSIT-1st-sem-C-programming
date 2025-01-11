#include <stdio.h>

int main() {
    float units, charge = 0.0;

    printf("Enter the units consumed by the customer: ");
    scanf("%f", &units);

    if (units <= 100) {
        charge = 1.50 * units;
    } 
    else if (units <= 200) {
        charge = (1.50 * 100) + (2.50 * (units - 100));
    } 
    else if (units <= 500) {
        charge = (1.50 * 100) + (2.50 * 100) + (3.50 * (units - 200));
    } 
    else {
        charge = (1.50 * 100) + (2.50 * 100) + (3.50 * 300) + (5.50 * (units - 500));
    }

    printf("The total charge is $%.2f\n", charge);

    return 0;
}
