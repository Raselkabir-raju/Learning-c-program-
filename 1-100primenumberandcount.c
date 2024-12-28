#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime, primeCount = 0;

    printf("Prime numbers between 1 and 100 are:\n");

   
    for (num = 2; num <= 100; num++) {
        isPrime = 1;  

     
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {  
                isPrime = 0; 
                break;
            }
        }

      
        if (isPrime) {
            printf("%d ", num);  
            primeCount++; 
        }
    }

    printf("\nTotal number of prime numbers between 1 and 100 is: %d\n", primeCount);

    return 0;
}
