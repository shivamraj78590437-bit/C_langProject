#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, userGuess, attempts = 0;
    int maxAttempts = 10;
    
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;
    
    printf("=== NUMBER GUESSING GAME ===\n");
    printf("Guess the secret number between 1 and 100.\n");
    printf("You have %d attempts!\n\n", maxAttempts);
    
    do {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &userGuess);
        attempts++;
        
        if (userGuess == secretNumber) {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
            break;
        }
        else if (userGuess < secretNumber) {
            printf("Too low! Try a higher number.\n");
        }
        else {
            printf("Too high! Try a lower number.\n");
        }
        
        if (attempts >= maxAttempts) {
            printf("\nGame Over! You used all %d attempts.\n", maxAttempts);
            printf("The secret number was: %d\n", secretNumber);
        }
        
    } while (attempts < maxAttempts && userGuess != secretNumber);
    
    printf("\nThanks for playing!\n");
    return 0;
}
