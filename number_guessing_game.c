#include <stdio.h> 
#include <stdlib.h>  // For rand() and srand() 
#include <time.h>    // For time() 
int main() { 
    int secretNumber, guess, attempts = 0; 
 
    // Set seed for random number 
    srand(time(NULL)); 
 
    // Generate random number between 1 to 100 
    secretNumber = rand() % 100 + 1; 
 
    printf("Welcome to Guess the Number Game!\n"); 
    printf("I'm thinking of a number between 1 and 100.\n"); 
 
    // Keep asking until the user guesses correctly 
    do { 
        printf("Enter your guess: "); 
        scanf("%d", &guess); 
        attempts++;  // Increase attempt count 
 
        if (guess < secretNumber) { 
            printf("Too low! Try again.\n"); 
        } else if (guess > secretNumber) { 
            printf("Too high! Try again.\n"); 
        } else { 
            printf("Correct! You guessed it in %d attempts.\n", attempts); 
} 
} while (guess != secretNumber); 
return 0; 
}