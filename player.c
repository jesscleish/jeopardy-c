#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
#include "player.h"

// converts entire string to upper case by reference
void wordToUpper(char *name)
{
    int i = 0;
    char letter;

    while (name[i] != '\0')
    {
        letter = name[i];

        name[i] = toupper(letter);
        i++;
    }
}

// Creates 4 new players and prompts for name input for each
void newPlayers(player *playerArr)
{
=======
>>>>>>> Stashed changes
#include "players.h"

#define NAME_LIMIT 35

// converts entire string to upper case by reference
void wordToUpper(char *name){
    int i = 0;
    char letter;

    while (name[i]) { 
        letter = name[i];
        name[i] = toupper(letter);
    } 
}

/* Creates 4 new players and prompts for name input for each
// I cant have this in players C because then it returns a local variable
// Daniel you gotta integrate this into main i think
struct player *newPlayers(){
    struct player playerArr[4];
<<<<<<< Updated upstream
=======
>>>>>>> 3af535bca40f60823729c08de545e957f0cd046a
>>>>>>> Stashed changes

    char input[NAME_LIMIT];
    char letter;

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
    for (int counter = 1; counter < 5; counter++)
    {

        printf("Enter the name of Player # %u: ", counter);
        scanf("%s", input);
        wordToUpper(&input); // converts name to capitals

        // ADD NAME VERIFICATION TO ENSURE NO DUPLICATE NAMES

        strcpy(playerArr[(counter - 1)].name, input);
        playerArr[(counter - 1)].score = 0;
    }
=======
>>>>>>> Stashed changes
    for (int counter = 1; counter < 5; counter++){
        printf("Enter the name of Player # %u\n", counter);
        scanf("%1s",input);
       
        wordToUpper(&input); // converts name to capitals


      // ADD NAME VERIFICATION TO ENSURE NO DUPLICATE NAMES
      

        strcpy(playerArr[(counter-1)].name, input);
        playerArr[(counter-1)].score = 0;
    }

    return playerArr; //apparently this should return the correct pointer
<<<<<<< Updated upstream
=======
>>>>>>> 3af535bca40f60823729c08de545e957f0cd046a
>>>>>>> Stashed changes
}
*/

// verify if player exists
bool playerExist(player *players, char *pName){ 
    bool namePresent = false;
    char * upperName;
    upperName = malloc(sizeof(char)*((strlen(pName)+1)));

    strcpy(upperName, pName); // copies player name to new pointer to be modified 
    wordToUpper(upperName);

    int result;
<<<<<<< Updated upstream

=======

<<<<<<< HEAD
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
=======
>>>>>>> Stashed changes
    for (int x = 0; x < 4; x++){
        result = strcmp(players[x].name, upperName);
        if (result == 0){ // this is the corresponding player, so say that name found 
            namePresent = true;
        } 
    }
<<<<<<< Updated upstream

    if (namePresent){
        return true;
    }
    else{
        return false;
    }
}

/* this doesnt work and im not sure why
// sorry this isnt a struct obj return i couldnt figure that out it's the address for the struct in the playerArr
struct Player getPlayer(int *playerArrAdr, char *pName){
    struct Player *playerArrPtr = NULL;
    playerArrPtr = playerArrAdr;
    
    int testid, id, result;
    char * upperName;
    upperName = malloc(sizeof(char)*((strlen(pName)+1)));

    strcpy(upperName, pName); // copies player name to new pointer to be modified 

    wordToUpper(upperName); 

    for (int testid = 0; testid < 4; testid++){
        result = strcmp(((playerArrPtr+testid)->name), upperName);
        if (result == 0){ // this is the corresponding player, 
            id = testid;
        }
    }

    return (*(playerArrPtr+id)); // pointer back to player object correctly identified :)
}
*/


// update score for a player given their name and how much to add
void updateScore(player *players, char *pName, int points){
    //run verify 
    bool nameValid;
    nameValid = playerExist(players, pName);
    
    char * upperName;
    upperName = malloc(sizeof(char)*((strlen(pName)+1)));

    strcpy(upperName, pName); 
    wordToUpper(upperName);

    if(nameValid){
        int result = 0;
        for (int x = 0; x < 4; x++){
            result = strcmp(players[x].name, upperName);
            if (result == 0){ 
                players[x].score = ((players[x].score) + points);
            } 
        } 
    }
    // otherwise do nothing, maybe error message?
}

=======

    if (namePresent){
        return true;
    }
    else{
>>>>>>> 3af535bca40f60823729c08de545e957f0cd046a
        return false;
    }
}

<<<<<<< HEAD
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
=======
/* this doesnt work and im not sure why
// sorry this isnt a struct obj return i couldnt figure that out it's the address for the struct in the playerArr
struct Player getPlayer(int *playerArrAdr, char *pName){
    struct Player *playerArrPtr = NULL;
    playerArrPtr = playerArrAdr;
    
    int testid, id, result;
    char * upperName;
    upperName = malloc(sizeof(char)*((strlen(pName)+1)));

    strcpy(upperName, pName); // copies player name to new pointer to be modified 

    wordToUpper(upperName); 

    for (int testid = 0; testid < 4; testid++){
        result = strcmp(((playerArrPtr+testid)->name), upperName);
        if (result == 0){ // this is the corresponding player, 
>>>>>>> 3af535bca40f60823729c08de545e957f0cd046a
            id = testid;
        }
    }

<<<<<<< HEAD
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
=======
    return (*(playerArrPtr+id)); // pointer back to player object correctly identified :)
}
*/


// update score for a player given their name and how much to add
void updateScore(player *players, char *pName, int points){
    //run verify 
    bool nameValid;
    nameValid = playerExist(players, pName);
    
    char * upperName;
    upperName = malloc(sizeof(char)*((strlen(pName)+1)));

    strcpy(upperName, pName); 
    wordToUpper(upperName);

    if(nameValid){
        int result = 0;
        for (int x = 0; x < 4; x++){
            result = strcmp(players[x].name, upperName);
            if (result == 0){ 
                players[x].score = ((players[x].score) + points);
            } 
        } 
>>>>>>> 3af535bca40f60823729c08de545e957f0cd046a
    }
    // otherwise do nothing, maybe error message?
}

<<<<<<< HEAD
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
=======
>>>>>>> 3af535bca40f60823729c08de545e957f0cd046a
>>>>>>> Stashed changes
