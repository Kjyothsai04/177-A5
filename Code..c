#include <stdio.h>

int main() {
    int num; // declare an integer variable to store the input number

    printf("Enter a number between 10 and 99: "); // prompt the user to enter a number
    scanf("%d", &num); // read the input number and store it in 'num'

    // check if the number is less than 10 or greater than 99
    if (num < 10 || num > 99) {
        printf("Warning: The number entered is not between 10 and 99.\n"); // print a warning message if the number is outside the range
    } else {
        printf("The number entered is: %d\n", num); // print the number if it is within the range
    }

    return 0; // indicate successful execution
}
