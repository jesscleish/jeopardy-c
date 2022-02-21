#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "player.h"
#include "util.h"

// Creates 4 new players and prompts for name input for each
void newPlayers(player *playerArr)
{

    char input[NAME_LIMIT];
    char letter;

    for (int counter = 1; counter < 5; counter++)
    {

        printf("Enter the name of Player # %u: ", counter);
        scanf("%s", input);
        wordToUpper(&input); // converts name to capitals

        // ADD NAME VERIFICATION TO ENSURE NO DUPLICATE NAMES

        strcpy(playerArr[(counter - 1)].name, input);
        playerArr[(counter - 1)].score = 0;
    }
}

// verify if player exists
bool playerExist(player *players, char *pName)
{
    bool namePresent = false;
    char *upperName;
    upperName = malloc(sizeof(char) * ((strlen(pName) + 1)));

    strcpy(upperName, pName); // copies player name to new pointer to be modified
    wordToUpper(upperName);

    int result;

    for (int x = 0; x < 4; x++)
    {
        result = strcmp(players[x].name, upperName);
        if (result == 0)
        { // this is the corresponding player, so say that name found
            namePresent = true;
        }
    }

    if (namePresent)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// this doesnt work and im not sure why
//  sorry this isnt a struct obj return i couldnt figure that out it's the address for the struct in the playerArr
int getPlayer(player *playerArrAdr, char *pName)
{

    int testid, id, result;
    char *upperName;
    upperName = malloc(sizeof(char) * ((strlen(pName) + 1)));

    strcpy(upperName, pName); // copies player name to new pointer to be modified

    wordToUpper(upperName);

    for (int testid = 0; testid < 4; testid++)
    {
        result = strcmp(playerArrAdr[testid].name, upperName);
        if (result == 0)
        { // this is the corresponding player,
            id = testid;
        }
    }

    return (id); // pointer back to player object correctly identified :)
}

// update score for a player given their name and how much to add
void updateScore(player *players, char *pName, int points)
{
    // run verify
    bool nameValid;
    nameValid = playerExist(players, pName);

    char *upperName;
    upperName = malloc(sizeof(char) * ((strlen(pName) + 1)));

    strcpy(upperName, pName);
    wordToUpper(upperName);

    if (nameValid)
    {
        int result = 0;
        for (int x = 0; x < 4; x++)
        {
            result = strcmp(players[x].name, upperName);
            if (result == 0)
            {
                players[x].score = ((players[x].score) + points);
            }
        }
    }
    // otherwise do nothing, maybe error message?
}

void displayPlayers(player *playerArr)
{
    printf("\n|");
    for (int playerNum = 0; playerNum < NUM_PLAYERS; playerNum++)
    {
        for (int i = 0; i < NAME_LIMIT; i++)
        {
            if (playerArr[playerNum].name[i] != '\0')
            {
                printf("%c", playerArr[playerNum].name[i]);
            }
            else
            {
                printf("-");
            }
        }
        printf("%d|", playerArr[playerNum].score);
    }
    printf("\n");
    // printf("|%s|%s|%s|%s|", playerArr[0].name, playerArr[1].name, playerArr[2].name, playerArr[3].name);
}