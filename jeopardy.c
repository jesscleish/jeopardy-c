#include <stdio.h>
#include <stdlib.h>
#include "jeopardy.h"
#include "player.h"
#include "questions.h"

int gameStart()
{
    printf("initializing the game\n");
    initialize_game();
    player *players;
    newPlayers(playerArr);

    // printf("got player names\n");
}

int gameLoop()
{
    int questionsAnswerd = 0;
    int currentPlayer;
    char nameInput[NAME_LIMIT];
    char catInput[BUFFER_LEN]; // ="Pokemon";
    char valInput[BUFFER_LEN]; // = "100";
    bool gameFinished = false;
    // Input buffer and and commands
    char buffer[BUFFER_LEN] = {0};
    // char *answer[50000];
    while (!gameFinished)
    {

        displayPlayers(playerArr);
        // printBoard();
        display_categories();

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
            // check if that catagory exists

            break;
        } while (1);
        bool validVal = false;
        bool answered = false;
        do
        {
            while (!validVal)
            {
                printf("What Value: ");
                scanf("%s", valInput);
                // checks if that value is available to be answered

                answered = already_answered(catInput, valInput);

                if (!answered)
                {
                    validVal = true;
                    break;
                }
            }

            // if (playerExist(playerArr, nameInput))
            // {
            //     currentPlayer = getPlayer(playerArr, nameInput);
            //     break;
            // }
            break;
        } while (1);

        // printf("\e[1;1H\e[2J"); // clears the screen

        display_question(catInput, atoi(valInput));

        char answer[BUFFER_LEN];
        printf("What Is The Answer: ");
        // fgets(answer, BUFFER_LEN, stdin);
        scanf("%c", answer);
        scanf("%[^\n]%*c", answer);

        printf("entered %s\n", answer);
        questionsAnswerd++;
        if (valid_answer(catInput, atoi(valInput), answer))
        {
            printf("Correct Answer!");
            printf("%s gains %d points \n", playerArr[currentPlayer].name, atoi(valInput));
            updateScore(playerArr, playerArr[currentPlayer].name, atoi(valInput));
        }
        else
        {
            printf("Wrong Answer!");
            // int num = get_question_number(catInput, atoi(valInput));
            // printf("Correct answer was: %s", questions[num].answer);`
        }
        if (questionsAnswerd == NUM_QUESTIONS)
        {
            gameFinished = true;
        }
    }
}

// temp function
// void printBoard() { printf(" _ _ _ _\n| | | | | |\n - - - - -\n"); }s

// // not used
// Processes the answer from the user containing what is or who is and
// tokenizes it to retrieve the answer.
// void tokenize(char *input, char **tokens)
// {
//     printf("tokenizing1");
//     wordToUpper(input);
//     printf("%s", input);

//     char *p = strtok(input, " ");
//     // char *tokens[3];
//     int i = 0;
//     printf("tokenizing2");

//     // add tokens to tokens array
//     while (p != NULL)
//     {
//         printf("tokenizing3");
//         printf("%s", p);
//         tokens[i++] = p;
//         p = strtok(NULL, " ");
//         printf("tokenizing4");
//     }

//     // print out tokens
//     printf("tokenizing5");
//     for (i = 0; i < 3; ++i)
//         printf("%s\n", tokens[i]);
//     printf("tokenizing6");
// }