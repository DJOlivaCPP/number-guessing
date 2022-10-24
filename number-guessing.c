//first we ask the player which option they want

//1 - plays the game
//will run a loop uuntil the player has guessed the correct number

//2 - change the range
//checks if the inputted value is a non-negative
//re ask them options 1 to 3

//3 - to exit the program

#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

time_t t;

int main(){
    int exit = 0;
    int MAX_VAL = 10;
    char option;

    while(exit == 0){
        printf("Choose an option 1 to 3: \n");
        printf("1 - Play the game\n");
        printf("2 - Change the max number\n");
        printf("3 - Exit");
        option = getchar();
        getchar();

        int found = 0;
        int target = srand((unsigned) time (&t)) % MAX_VAL + 1;
        while (option == '1' && found == 0)
        {
            char cGuess;
            int guess;
            printf("Enter a guess\n");
            cGuess = getchar();
            getchar();
            guess = atoi(cGuess);

            if(cGuess == 'q'){
                break;
            }

            if(guess == target){
                printf("Correct Guess!");
                found++;
            } else if (guess > target) {
                printf("Your guess is larger then the correct amount\n");
            } else if (guess < target) {
                printf("Your guess is smaller then the correct amount\n");
            }
        }
        
        if(option == '2'){
            char temp;
            printf("What would you like the max value to be\n");
            temp = getchar();
            getchar();
            MAX_VAL = atoi(temp);
        }

        if(option == '3'){
            exit = option;
        }
    }

    return 0;
}