#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    int number;
    int attempts = 0;

    srand(time(NULL));
    number = (rand() % 100) + 1;

    printf("I have selected a number between 1 and 100. Can you guess it?\n");
    scanf("%d", &guess);

    while (guess != number) {
        attempts++;
        if (guess < number) {
            printf("Too low! Try again: ");
        } else if (guess > number) {
            printf("Too high! Try again: ");
        }
        scanf("%d", &guess);
    }

    if (guess == number) {
        printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
    }

    return 0;
}