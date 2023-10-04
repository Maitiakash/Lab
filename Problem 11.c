#include <stdio.h>

int main() {
    double rupees, yen, dollars, euros;
    
    // Input the amount in Indian Rupees (INR)
    printf("Enter the amount in Indian Rupees (INR): ");
    scanf("%lf", &rupees);
    
    // Define exchange rates as of your current knowledge
    double yenRate = 1.44;  // 1 INR = 1.44 JPY
    double dollarRate = 0.014;  // 1 INR = 0.014 USD
    double euroRate = 0.012;  // 1 INR = 0.012 EUR
    
    // Convert to other currencies
    yen = rupees * yenRate;
    dollars = rupees * dollarRate;
    euros = rupees * euroRate;
    
    // Display the converted amounts
    printf("%.2lf INR is equal to %.2lf JPY\n", rupees, yen);
    printf("%.2lf INR is equal to %.2lf USD\n", rupees, dollars);
    printf("%.2lf INR is equal to %.2lf EUR\n", rupees, euros);
    
    return 0;
}

