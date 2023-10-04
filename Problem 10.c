
#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    
    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    
    // Convert Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;
    
    // Print the result
    printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}
