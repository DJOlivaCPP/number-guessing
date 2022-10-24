//first we ask the player which option they want

//1 - plays the game
//will run a loop uuntil the player has guessed the correct number

//2 - change the range
//checks if the inputted value is a non-negative
//re ask them options 1 to 3

//3 - to exit the program

int main(){
    int exit = 0;
    int MAX_VAL = 10;
    char option;

    while(exit == 0){
        printf("Choose an option 1 to 3: \n");
        printf("1 - Play the game\n");
        printf("2 - Change the max number\n");
        printf("3 - Exit");
        option = getChar();
        getChar();

        while (option == '1')
        {
            
        }
        
        if(option == '2'){
            char temp;
            printf("What would you like the max value to be\n");
            temp = getChar();
            getChar();
            MAX_VAL = atof(temp);
        }

        if(option == '3'){
            exit = option;
        }
    }
}