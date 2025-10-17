/* HOW THIS CODE WORKS? -> GUESS THE NUMBER GAME!! -> In this game the computer will 
generate a random number.You have to guess the number,if 
the guessed number is  higher than the computer's number the 
computer will tell you to guess a lower number,if the guessed number 
is lower than the computer's number the computer will tell you to guess
a higher number,once the guessed number is correct the computer will 
show the number of tries it took you to guess the number**IF YOU GUESS 
THE NUMBER IN LESS GUESSES YOU WIN!!*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int NoG = 0;//NoG-> number of guesses//
    int guessed;
    //printf("Random number between 1 and 100: %d\n", randomNumber);

    
    do{

        printf("Guess the number: \n");
        scanf("%d",&guessed);
        if (guessed > randomNumber){

            printf("Guess a Lower Number! \n");
        }else if (guessed < randomNumber) {

            printf("Guess a Higher Number! \n");

        }
        else {

            printf("CONGRATS YOU GUESSED THE NUMBER RIGHT!!!\n");
        }

        NoG++;

    }
    while(guessed != randomNumber);

    printf("You guessed the number in %d guesses", NoG);


    

    return 0;
}

