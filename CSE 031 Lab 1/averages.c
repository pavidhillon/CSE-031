#include <stdio.h>
#include <stdlib.h>

// Calculating the sum of digits of given number 
int sum_of_digits(int num) {
    int sum = 0;
    num = abs(num); // Make sure it is positive 
    while (num > 0) {
        sum += num % 10; // Take out last digit and add to sum
        num /= 10; // Remove last digit 
    }
    return sum;
}

int main() {
    int count_even = 0, count_odd = 0; // For numbers with even and odd digit sums
    int sum_even = 0, sum_odd = 0; // The sums
    int value, n = 1; 
    
    // Infinite loop
    while (1) {
        char suffix[3] = "th";
        if (n % 10 == 1 && n % 100 != 11) {
            sprintf(suffix, "st");
        } else if (n % 10 == 2 && n % 100 != 12) {
            sprintf(suffix, "nd");
        } else if (n % 10 == 3 && n % 100 != 13) {
            sprintf(suffix, "rd");
        }
        
        // Asking user for input
        printf("Enter the %d%s value: ", n, suffix);
        scanf("%d", &value);
        
        if (value == 0) {
            break;
        }
        
        int digit_sum = sum_of_digits(value);
        
        // Seeing if it is even or odd
        if (digit_sum % 2 == 0) {
            sum_even += value;
            count_even++;
        } else {
            sum_odd += value;
            count_odd++;
        }
        
        n++;
    }
    
    // Telling the user if there was any invalid inputs 
    if (count_even + count_odd == 0) {
        printf("There is no average to compute.\n");
    } else {
        if (count_even > 0) {
            printf("Average of input values whose digits sum up to an even number: %.2f\n", (float)sum_even / count_even);
        }
        if (count_odd > 0) {
            printf("Average of input values whose digits sum up to an odd number: %.2f\n", (float)sum_odd / count_odd);
        }
    }
    
    return 0;
}
