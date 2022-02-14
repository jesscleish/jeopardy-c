struct player{
	char name[12];
	int score = 0;
};

// array that stores all pointers to player objects.
player* players[4];

//returns true if name is in use
bool playerExists(player* players, char* name) {
	for (int i = 0; i <= (sizeof(players) / sizeof(player)); i++) {
		if (players[i].name == name) {
			return true;
		}
	}
	return false;
}

// updates the players scores
void updateScore(player* player, int score) {
	printf("%d",player.score)

}