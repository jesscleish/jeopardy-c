# jeopardy-c
Jeopardy written in C

## Tutorial 3
### Group A17

## player.c / player.h files
These files define the structure used to hold the details of each player object (name, and score), as well as the functions utilized in conjunction with these player objects.  There is a function to verify the existence of a player by name when provided the pointer to an array of player objects.  There is also a function to update the score of the player when provided with the player name and a pointer to the array of player objects.

## question.c / question.h files
These files define the functions utilized with questions, including verifying if a question has been answered already, displaying the question, displaying the available categories, determining if there is a valid answer provided, and a function to initialize/start a game with a new set of questions.

## jeopardy.c / jeopardy.h files
Houses the “game logic”, and is the main “brain” behind the game.  It initializes (creates) the player array, takes input for the names of the players, and then conducts a game of jeopardy by prompting the user(s) for input to clearly indicate the outcome of each turn.
