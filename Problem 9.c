
#include <stdio.h>
#include <math.h>

int main() {
    double side, area;
    
    // Input the length of a side of the hexagon
    printf("Enter the length of a side of the hexagon: ");
    scanf("%lf", &side);
    
    // Calculate the area of the hexagon using the formula: Area = (3 * sqrt(3) * side^2) / 2
    area = (3 * sqrt(3) * side * side) / 2;
    
    // Print the result
    printf("The area of the hexagon is: %.2lf\n", area);
    
    return 0;
}
