//*******************************************
//*************Battleship - Exam 2***********
//**Written by - Steve, Jeremy, and Daniela**
//**********Due Sunday October 8th***********
//*******************************************

#include "template.h"

void displayMenu();
void displayGrid(char battleField[11][11]);
char getChoice();
void placeAircraftCarrier(char battleField[11][11]);
void placeBattleship(char battleField[11][11]);
void placeCruiser(char battleField[11][11]);
void placeDestroyer(char battleField[11][11]);
void placeSubmarine(char battleField[11][11]);

int main() {
	char battleField[11][11] = {
		{ '\0',  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' },
		{ '0',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '1',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '2',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '3',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '4',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '5',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '6',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '7',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '8',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
		{ '9',  'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },
	};
	char choice;

	do {
		displayMenu();
		choice = getChoice();
		switch (choice) {
		case 'N':
			CLS;
			printf("ORIGINAL GRID\n");
			displayGrid(battleField);
			PAUSE;
			printf("Placing ships...");
			placeCruiser(battleField);
			CLS;
			placeAircraftCarrier(battleField);
			CLS;
			placeBattleship(battleField);
			CLS;
			placeSubmarine(battleField);
			CLS;
			placeDestroyer(battleField);
			break;
		case 'C':
			break;
		case 'H':
			break;
		case 'Q':
			printf("Thanks for playing!\n\n");
			PAUSE;
			break;
		default:
			printf("ERROR - INVALID ENTRY.\n");
			PAUSE;
			break;
		}// end switch
	} while (choice != 'Q');
}//End Main

void displayMenu() {
	CLS;
	printf("*****BATTLESHIP*****\n\n");
	printf("[N]ew Game.\n");
	printf("[C]ontinue\n");
	printf("[H]igh scores.\n");
	printf("[Q]uit.\n\n");
	printf("Enter selection: ");
}// end displayMenu

void displayGrid(char battleField[11][11]) {
	int i = 0;
	int j = 0;

	for (i = 0; i < 11; i++) {
		printf("\n");
		for (j = 0; j < 11; j++) {
			printf(" %c ", battleField[i][j]);
		}
	}   printf("\n");
}//End displayGrid

char getChoice() {
	char result;
	scanf("%c", &result); FLUSH;
	result = toupper(result);
	return result;
}// end getChoice

void placeAircraftCarrier(char battleField[11][11]) {
	int temp, x, y, z, i;

	srand((unsigned)time(NULL));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;


	if (battleField[x][y] == 'W') {
		battleField[x][y] = 'A';
	}
	else if (battleField[x + 1][y] == 'W' && battleField[x + 1][y] != NULL) {
		x++;
		battleField[x][y] = 'A';
	}
	else if (battleField[x][y + 1] == 'W' && battleField[x][y + 1] != NULL) {

		y++;
		battleField[x][y] = 'A';
	}
	printf("the PLACEMNT OF AIRCRAFT CARRIER  %i , %i CASE %i", x, y, z);
	printf("\n");
	printf("\n");

	switch (z) {
	case 1:
		temp = x;
		for (i = 0; i < 4; i++) {


			if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'A';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[temp - 1][y] = 'A';
				x--;
			}

			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'A';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'A';
				y--;
			}
		}
		break;
	case 2:
		temp = x;
		for (i = 0; i < 4; i++) {

			if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'A';
				x--;
			}
			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'A';
				x++;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'A';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'A';
				y--;
			}
		}
		break;
	case 3:
		temp = y;

		for (i = 0; i < 4; i++) {

			if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'A';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'A';
				y--;
			}

			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'A';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'A';
				x--;
			}
		}

		break;
	case 4:
		temp = y;

		for (i = 0; i < 4; i++) {

			if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'A';
				y--;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'A';
				y++;
			}

			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'A';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'A';
				x--;
			}
		}
		break;
	default:
		break;
	}
	printf("Aircraft Carrier placed...\n");
	displayGrid(battleField);
	PAUSE;

}// end placeAircraftCarrier

void placeCruiser(char battleField[11][11]) {
	int x, y, z;
	srand((unsigned)time(NULL));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;

	battleField[x][y] = 'C';

	switch (z) {
	case 1:
		if (battleField[x + 1][y] == 'W')
			battleField[x + 1][y] = 'C';
		else if (battleField[x - 1][y] == 'W')
			battleField[x - 1][y] = 'C';
		else if (battleField[x][y + 1] == 'W')
			battleField[x][y + 1] = 'C';
		else if (battleField[x][y - 1] == 'W')
			battleField[x][y - 1] = 'C';
		break;
	case 2:
		if (battleField[x - 1][y] == 'W')
			battleField[x - 1][y] = 'C';
		else if (battleField[x + 1][y] == 'W')
			battleField[x][y + 1] = 'C';
		else if (battleField[x][y - 1] == 'W')
			battleField[x][y - 1] = 'C';

		break;
	case 3:
		if (battleField[x][y + 1] == 'W')
			battleField[x][y + 1] = 'C';
		else if (battleField[x][y - 1] == 'W')
			battleField[x][y - 1] = 'C';
		else if (battleField[x - 1][y] == 'W')
			battleField[x - 1][y] = 'C';

		break;
	case 4:
		if (battleField[x][y - 1] == 'W')
			battleField[x][y - 1] = 'C';
		else if (battleField[x][y + 1] == 'W')
			battleField[x][y + 1] = 'C';
		else if (battleField[x + 1][y] == 'W')
			battleField[x + 1][y] = 'C';
		else if (battleField[x - 1][y] == 'W')
			battleField[x - 1][y] = 'C';

		break;
	default:
		break;
	}

	printf("the PLACEMNT OF CRUISER SHIP %i , %i CASE %i", x, y, z);
	printf("\n");
	printf("\n");

	displayGrid(battleField);
	printf("Lil yachty Placed\n");
	PAUSE;
}// end placeCruiser

void placeBattleship(char battleField[11][11]) {
	int x, y, z, i, temp;
	srand((unsigned)time(NULL));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;

	if (battleField[x][y] == 'W') {
		battleField[x][y] = 'B';
	}
	else if (battleField[x + 1][y] == 'W' && battleField[x + 1][y] != NULL) {
		x++;
		battleField[x][y] = 'B';
	}
	else if (battleField[x][y + 1] == 'W' && battleField[x][y + 1] != NULL) {
		y++;
		battleField[x][y] = 'B';
	}
	printf("the PLACEMNT OF BATTLESHIP %i , %i CASE %i", x, y, z);
	printf("\n");
	printf("\n");

	switch (z) {
	case 1:
		temp = x;
		for (i = 0; i < 3; i++) {

			if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'B';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'B';
				x--;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'B';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'B';
				y--;
			}
		}
		break;
	case 2:
		temp = x;
		for (i = 0; i < 3; i++) {

			if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'B';
				x--;
			}
			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'B';
				x++;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'B';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'B';
				y--;
			}
		}
		break;
	case 3:
		temp = y;

		for (i = 0; i < 3; i++) {

			if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'B';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'B';
				y--;
			}
			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'B';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'B';
				x--;
			}
		}
		break;
	case 4:
		temp = y;

		for (i = 0; i < 3; i++) {

			if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'B';
				y--;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'B';
				y++;
			}

			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'B';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'B';
				x--;
			}

		}
		break;
	default:
		break;
	}

	printf("Placed battleship...\n\n");
	displayGrid(battleField);
	PAUSE;
}// end placeBattleship

void placeSubmarine(char battleField[11][11]) {
	int i, x, y, z, temp;
	srand((unsigned)time(NULL));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;

	if (battleField[x][y] == 'W') {
		battleField[x][y] = 'S';
	}
	else if (battleField[x + 1][y] == 'W' && battleField[x + 1][y] != NULL) {
		x++;
		battleField[x][y] = 'S';
	}
	else if (battleField[x][y + 1] == 'W' && battleField[x][y + 1] != NULL) {
		y++;
		battleField[x][y] = 'S';
	}
	printf("the PLACEMNT OF SUBMARINE %i , %i CASE %i", x, y, z);
	printf("\n");
	printf("\n");


	switch (z) {
	case 1:
		temp = x;
		for (i = 0; i < 2; i++) {

			if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'S';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'S';
				x--;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'S';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'S';
				y--;
			}
		}

		break;
	case 2:
		temp = x;
		for (i = 0; i < 2; i++) {

			if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'S';
				x--;
			}
			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'S';
				x++;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'S';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'S';
				y--;
			}
		}

		break;
	case 3:
		temp = y;

		for (i = 0; i < 2; i++) {

			if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'S';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'S';
				y--;
			}

			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'S';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'S';
				x--;
			}
		}

		break;
	case 4:
		temp = y;

		for (i = 0; i < 2; i++) {

			if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'S';
				y--;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'S';
				y++;
			}

			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'S';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'S';
				x--;
			}
		}
		break;
	default:
		break;
	}

	printf("Placed submarine\n\n");
	displayGrid(battleField);
	PAUSE;
}// end placeSubmarine

void placeDestroyer(char battleField[11][11]) {
	int x, y, z, i, temp;
	
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	srand((unsigned)time(NULL));
	
	printf("PLACEMENT OF DESTROYER %i , %i CASE %i", x, y, z);
	printf("\n");
	printf("\n");

	if (battleField[x][y] == 'W') {
		battleField[x][y] = 'D';
	}
	else if (battleField[x + 1][y] == 'W' && battleField[x + 1][y] != NULL) {
		x++;
		battleField[x][y] = 'D';
	}
	else if (battleField[x][y + 1] == 'W' && battleField[x][y + 1] != NULL) {
		y++;
		battleField[x][y] = 'D';
	}
	
	switch (z) {
	case 1:
		temp = x;
		for (i = 0; i < 2; i++) {

			if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'D';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'D';
				x--;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'D';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'D';
				y--;
			}
		}
		break;
	case 2:
		temp = x;
		for (i = 0; i < 2; i++) {

			if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'D';
				x--;
			}
			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'D';
				x++;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'D';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'D';
				y--;
			}
		}
		break;
	case 3:
		temp = y;

		for (i = 0; i < 2; i++) {

			if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'D';
				y++;
			}
			else if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'D';
				y--;
			}

			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'D';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'D';
				x--;
			}

		}
		break;
	case 4:
		temp = y;

		for (i = 0; i < 2; i++) {

			if (battleField[x][y - 1] == 'W') {
				battleField[x][y - 1] = 'D';
				y--;
			}
			else if (battleField[x][y + 1] == 'W') {
				battleField[x][y + 1] = 'D';
				y++;
			}

			else if (battleField[x + 1][y] == 'W') {
				battleField[x + 1][y] = 'D';
				x++;
			}
			else if (battleField[x - 1][y] == 'W') {
				battleField[x - 1][y] = 'D';
				x--;
			}

		}
		break;
	default:
		break;

	}

	printf("Placed destroyer...\n\n");
	displayGrid(battleField);
	PAUSE;

}// end placeDestroyer