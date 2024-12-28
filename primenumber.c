#include <stdio.h>
#include <math.h> 

int main() {
    int i, num, isPrime = 1;  
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number\n", num);
        return 0; 
    }

    // Loop up to the square root of 'num'
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = 0;  // Set 'isPrime' to false if a factor is found
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
