#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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