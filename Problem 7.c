
#include <stdio.h>

int main() {
    float side, area;

    // Input the length of one side of the square
    printf("Enter the length of one side of the square: ");
    scanf("%f", &side);

    // Calculate the area of the square
    area = side * side;

    // Display the result
    printf("The area of the square is: %.2f square units\n", area);

    return 0;
}