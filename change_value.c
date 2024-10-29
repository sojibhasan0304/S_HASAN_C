#include <stdio.h>
int main()
{
    printf("Change the variable\n"); 

    // Set the maximum possible score in the game to 500
int maxscore = 500; 

// The actual score of the user
int userscore = 222; 

/* Calculate the percantage of the user's score in relation to the maximum available score.
Convert userScore to float to make sure that the division is accurate */
float result = maxscore/userscore; 

// Print the percentage
printf("User's percentage is: %.2f ", result );
    return 0 ; 
}