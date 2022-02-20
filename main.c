#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "jeopardy.h"
#include "player.h"
#include "questions.h"

int main(int argc, char *argv[])
{
	printf("Hello World! Open the Game!\n");
	gameStart();
	gameLoop();
	return 1;
}