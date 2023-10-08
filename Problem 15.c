#include <stdio.h>

int main() {
    int num = 10;  // Initialize a variable with the value 10

    // Right shift by 1 position
    int rightShifted = num >> 1;
    printf("Right Shifted: %d\n", rightShifted);  // Prints 5 (10 >> 1 = 5)

    // Left shift by 2 positions
    int leftShifted = num << 2;
    printf("Left Shifted: %d\n", leftShifted);  // Prints 40 (10 << 2 = 40)

    return 0;
}
