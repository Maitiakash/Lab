
#include <stdio.h>

int main() {
    double base, height, area;

    // Input the base and height of the right triangle
    printf("Enter the base of the right triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the right triangle: ");
    scanf("%lf", &height);

    // Calculate the area
    area = 0.5 * base * height;

    // Display the result
    printf("The area of the right triangle is: %lf\n", area);

    return 0;
}