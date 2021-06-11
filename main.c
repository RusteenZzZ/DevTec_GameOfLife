#include "./game/game.h"

int main(){

	int option;

	printf("Choose the version:\n1. Clipped\n2. Circular\n");
	scanf("%d", &option);

	game_loop(option);

	return 0;
}