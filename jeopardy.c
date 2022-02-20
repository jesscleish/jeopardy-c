#include <stdio.h>
#include <stdlib.h>
#include "jeopardy.h"
#include "player.h"
#include "questions.h"

int gameStart()
{
    printf("Initsalizing the game\n");
    player *players;
    newPlayers(playerArr);

    printf("got player names\n");
}

int gameLoop()
{
    int currentPlayer;
    char nameInput[NAME_LIMIT];
    char catInput[900];
    char valInput[900];
    bool gameFinished = false;

    while (!gameFinished)
    {
        displayPlayers(playerArr);
        printBoard();

        // get what player is playing this round
        do
        {
            printf("Enter the name of who is going to play this round: ");
            scanf("%s", nameInput);

            if (playerExist(playerArr, nameInput))
            {
                currentPlayer = getPlayer(playerArr, nameInput);
                break;
            }
        } while (1);

        // allow that player to select the question
        do
        {
            printf("What Category: ");
            scanf("%s", catInput);
            // checks if that catagory exists

            // if (playerExist(playerArr, nameInput))
            // {
            //     currentPlayer = getPlayer(playerArr, nameInput);
            //     break;
            // }
            break;
        } while (1);

        do
        {
            printf("What Value: ");
            scanf("%s", valInput);
            // checks if that value is available to be answered

            // if (playerExist(playerArr, nameInput))
            // {
            //     currentPlayer = getPlayer(playerArr, nameInput);
            //     break;
            // }
            break;
        } while (1);

        printf("\e[1;1H\e[2J"); // clears the screen
    }
}

void printBoard() { printf(" _ _ _ _\n| | | | | |\n - - - - -\n"); }