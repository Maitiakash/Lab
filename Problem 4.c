
#include <stdio.h>

int main() {
    double radius, area;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area
    area = 3.14159265359 * radius * radius;

    // Display the area
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}