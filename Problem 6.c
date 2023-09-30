
#include <stdio.h>

int main() {
    // Declare variables
    double radius, circumference;
    const double pi = 3.14159265359; // You can use a more accurate value of pi if needed.

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the circumference
    circumference = 2 * pi * radius;

    // Display the result
    printf("The circumference of the circle with radius %.2lf is %.2lf\n", radius, circumference);

    return 0;
}