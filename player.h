#ifndef PLAYERS_H_
#define PLAYERS_H_

#include <stdbool.h>

#define NUM_PLAYERS 4
#define NAME_LIMIT 35

// struct definition for a player
typedef struct
{
    char name[NAME_LIMIT];
    int score;
} player;

player playerArr[NUM_PLAYERS];

extern void wordToUpper(char *name);
extern bool playerExist(player *players, char *pName);

extern void updateScore(player *players, char *pName, int score);

#endif