#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, i;
    int isPrime, primeCount = 0, primeSum = 0;


    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);


    for (num = start; num <= end; num++) {
        if (num < 2) continue;  
        
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
            primeSum += num;     
        }
    }

    printf("\nTotal number of prime numbers between %d and %d is: %d\n", start, end, primeCount);
    printf("Sum of all prime numbers between %d and %d is: %d\n", start, end, primeSum);

    return 0;
}
