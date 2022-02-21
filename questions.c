/*
 * Tutorial 3 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <GROUP MEMBERS>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questions.h"
#include "util.h"

// Initializes the array of questions for the game
void initialize_game(void)
{

    // Restaurant Questions
    strcpy(questions[0].category, "Resturants");
    strcpy(questions[0].question, "I'm Lovin It");
    strcpy(questions[0].answer, "What is McDonalds");
    questions[0].value = 100;
    questions[0].answered = false;

    strcpy(questions[1].category, "Resturants");
    strcpy(questions[1].question, "Eat Fresh");
    strcpy(questions[1].answer, "What is Subway");
    questions[1].value = 200;
    questions[1].answered = false;

    strcpy(questions[2].category, "Resturants");
    strcpy(questions[2].question, "Finger Lickin Good");
    strcpy(questions[2].answer, "What is Kentucky Fried Chicken / KFC");
    questions[2].value = 300;
    questions[2].answered = false;

    strcpy(questions[3].category, "Resturants");
    strcpy(questions[3].question, "Always Fresh, Always");
    strcpy(questions[3].answer, "What is Tim Hortons");
    questions[3].value = 400;
    questions[3].answered = false;

    strcpy(questions[4].category, "Resturants");
    strcpy(questions[4].question, "Have it your way");
    strcpy(questions[4].answer, "What is Burger King");
    questions[4].value = 500;
    questions[4].answered = false;

    // pokemon
    strcpy(questions[5].category, "Pokemon");
    strcpy(questions[5].question, "This fish pokemon is shaped like a heart");
    strcpy(questions[5].answer, "What is Luvdisc");
    questions[5].value = 100;
    questions[5].answered = false;

    strcpy(questions[6].category, "Pokemon");
    strcpy(questions[6].question, "This pokemon was born from scientific experiments on the mythical pokemon Mew");
    strcpy(questions[6].answer, "What is Mewtwo");
    questions[6].value = 200;
    questions[6].answered = false;

    strcpy(questions[7].category, "Pokemon");
    strcpy(questions[7].question, "This pokemon native to the Johto region disguises itself as a tree despite being a rock");
    strcpy(questions[7].answer, "What is Sudowoodo");
    questions[7].value = 300;
    questions[7].answered = false;

    strcpy(questions[8].category, "Pokemon");
    strcpy(questions[8].question, "The tip of this yellow pokemon’s tail changes between a wedge and a heart in it’s male and female form. ");
    strcpy(questions[8].answer, "What is Pikachu");
    questions[8].value = 400;
    questions[8].answered = false;

    strcpy(questions[9].category, "Pokemon");
    strcpy(questions[9].question, "The tail of this pokemon is considered a delicacy in some regions");
    strcpy(questions[9].answer, "What is Slowpoke");
    questions[9].value = 500;
    questions[9].answered = false;

    // disney
    strcpy(questions[10].category, "Disney");
    strcpy(questions[10].question, "In Disney’s “Snow White”, there are this many dwarfs");
    strcpy(questions[10].answer, "What is seven");
    questions[10].value = 100;
    questions[10].answered = false;

    strcpy(questions[11].category, "Disney");
    strcpy(questions[11].question, "In Disney’s Peter Pan, this magic substance allows its users to fly");
    strcpy(questions[11].answer, "What is Pixie Dust");
    questions[11].value = 200;
    questions[11].answered = false;

    strcpy(questions[12].category, "Disney");
    strcpy(questions[12].question, "In Disney’s “The Little Mermaid”, Ariel gives her voice up in exchange for this");
    strcpy(questions[12].answer, "What are legs");
    questions[12].value = 300;
    questions[12].answered = false;

    strcpy(questions[13].category, "Disney");
    strcpy(questions[13].question, "In Disney’s “Encanto”, there are this many Madrigal grandchildren");
    strcpy(questions[13].answer, "What is six");
    questions[13].value = 400;
    questions[13].answered = false;

    strcpy(questions[14].category, "Disney");
    strcpy(questions[14].question, "In Disney’s “Mulan”, this is the name chosen by Mulan for herself while impersonating a man");
    strcpy(questions[14].answer, "Who is Ping");
    questions[14].value = 500;
    questions[14].answered = false;

    // science
    strcpy(questions[15].category, "Science");
    strcpy(questions[15].question, "Sodium is represented by this symbol on the periodic table");
    strcpy(questions[15].answer, "What is Na");
    questions[15].value = 100;
    questions[15].answered = false;

    strcpy(questions[16].category, "Science");
    strcpy(questions[16].question, "Dolly was the first living creature to be cloned and is this type of animal");
    strcpy(questions[16].answer, "What is a sheep");
    questions[16].value = 200;
    questions[16].answered = false;

    strcpy(questions[17].category, "Science");
    strcpy(questions[17].question, "This mathematician and physicist is responsponsible for 3 key laws of motion, and gravitational theory!");
    strcpy(questions[17].answer, "Who is Isaac Newton");
    questions[17].value = 300;
    questions[17].answered = false;

    strcpy(questions[18].category, "Science");
    strcpy(questions[18].question, "Aspirin is made from the bark of this tree");
    strcpy(questions[18].answer, "What is Willow");
    questions[18].value = 400;
    questions[18].answered = false;

    strcpy(questions[19].category, "Science");
    strcpy(questions[19].question, "Bed bugs are attracted to this gas as it indicates the presence of humans so they can be lured with dry ice");
    strcpy(questions[19].answer, "What is Carbon Dioxide");
    questions[19].value = 500;
    questions[19].answered = false;

    // code
    strcpy(questions[20].category, "Coding");
    strcpy(questions[20].question, "This language symbolizes a warm, energizing drink");
    strcpy(questions[20].answer, "What is Java");
    questions[20].value = 100;
    questions[20].answered = false;

    strcpy(questions[21].category, "Coding");
    strcpy(questions[21].question, "This language is a large snake");
    strcpy(questions[21].answer, "What is Python");
    questions[21].value = 200;
    questions[21].answered = false;

    strcpy(questions[22].category, "Coding");
    strcpy(questions[22].question, "This language is also a note in music!");
    strcpy(questions[22].answer, "What is C#");
    questions[22].value = 300;
    questions[22].answered = false;

    strcpy(questions[23].category, "Coding");
    strcpy(questions[23].question, "This language is a valuable gemstone (and mining apparatus)");
    strcpy(questions[23].answer, "What is Ruby (on Rails)");
    questions[23].value = 400;
    questions[23].answered = false;

    strcpy(questions[24].category, "Coding");
    strcpy(questions[24].question, "What this assignment was written in!");
    strcpy(questions[24].answer, "What is C");
    questions[24].value = 500;
    questions[24].answered = false;
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{

    bool is_empty = true;

    printf("\nRestaurants\n");

    for (int j = 0; j < 5; j++)
    {
        if (questions[j].answered == false)
        {
            is_empty = false;
            printf("$%d question is still unanswered\n", questions[j].value);
        }
    }
    if (is_empty == true)
        printf("\nThere are no questions left\n");

    // cat2
    is_empty = true;

    printf("\nPokemon\n");

    for (int k = 5; k < 10; k++)
    {
        if (questions[k].answered == false)
        {
            is_empty = false;
            printf("$%d question is still unanswered\n", questions[k].value);
        }
    }
    if (is_empty == true)
        printf("\nThere are no questions left\n");

    // cat3
    is_empty = true;

    printf("\nDisney\n");

    for (int l = 10; l < 15; l++)
    {
        if (questions[l].answered == false)
        {
            is_empty = false;
            printf("$%d question is still unanswered\n", questions[l].value);
        }
    }
    if (is_empty == true)
        printf("\nThere are no questions left\n");

    // cat4
    is_empty = true;

    printf("\nScience\n");

    for (int m = 15; m < 20; m++)
    {
        if (questions[m].answered == false)
        {
            is_empty = false;
            printf("$%d question is still unanswered\n", questions[m].value);
        }
    }
    if (is_empty == true)
        printf("\nThere are no questions left\n");

    // cat5
    is_empty = true;

    printf("\nCoding\n");

    for (int n = 20; n < 25; n++)
    {
        if (questions[n].answered == false)
        {
            is_empty = false;
            printf("$%d question is still unanswered\n", questions[n].value);
        }
    }
    if (is_empty == true)
        printf("\nThere are no questions left\n");
}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{

    printf("finding Question %s, %d\n", category, value);
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        // printf("\n%s, %s, %d", questions[i].question, questions[i].category, questions[i].value);
        if (strcmp(category, questions[i].category) == 0 && (value == questions[i].value))
        {
            printf("Question: %s\n", questions[i].question);
            questions[i].answered = true;
            return;
        }
    }

    printf("Question not found");
}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char *category, int value, char *answer)
{
    wordToUpper(answer);
    printf("validating answer\n");
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        if (strcmp(category, questions[i].category) == 0 && (value == questions[i].value))
        {
            char *truth = questions[i].answer;
            wordToUpper(truth);
            printf("the answer: %s\n You entered %s\n", truth, answer);
            return (strcasecmp(answer, truth) == 0);
        }
    }
}

// Returns true if the question has already been answered
bool already_answered(char *category, int value)
{
    // lookup the question and see if it's already been marked as answered
    printf("finding Question %s, %d\n", category, value);
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        // printf("\n%s, %s, %d", questions[i].question, questions[i].category, questions[i].value);
        if (strcmp(category, questions[i].category) == 0 && (value == questions[i].value))
        {
            return (questions[i].answered);
        }
    }
}