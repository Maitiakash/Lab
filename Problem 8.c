
#include <stdio.h>

int main() {
    // Declare variables for length and width
    double length, width;

    // Prompt the user for input
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate the area
    double area = length * width;

    // Display the result
    printf("The area of the rectangle is: %lf square units\n", area);

    return 0;
}