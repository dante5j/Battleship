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
void reset(char battleField[11][11]);

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
			reset(battleField);
			displayGrid(battleField);
			PAUSE;
			printf("Placing ships...");
			placeCruiser(battleField);
			placeAircraftCarrier(battleField);
			placeBattleship(battleField);
			placeSubmarine(battleField);
			placeDestroyer(battleField);
			displayGrid(battleField);
			PAUSE;
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
}//End Main *************************************************************************************************

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
	int x, y, z, i, temp;
	char collision;

	srand((unsigned)time(NULL));

	// test if ship placement is possible
	do {
		collision = 'N';
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		z = (rand() % 4) + 1;
		if (z == 1) {
			temp = x;
			for (i = 0; i < 5; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
			}
		}// end if case 1

		else if (z == 2) {
			temp = x;
			for (i = 0; i < 5; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
			}
		}// end if case 2

		else if (z == 3) {
			temp = y;
			for (i = 0; i < 5; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
			}
		}// end if case 3

		else if (z == 4) {
			temp = y;
			for (i = 0; i < 5; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
			}
		}// end if case 4
	} while (collision != 'N');
	// place the ships
	
	switch (z) {
		case 1:// down
			for (i = 0; i < 5; i++) {
				battleField[x][y] = 'A';
				x++;
			}
		break;
	case 2:// up
		for (i = 0; i < 5; i++) {
				battleField[x][y] = 'A';
				x--;
			}
		break;
	case 3:// right
		for (i = 0; i < 5; i++) {
				battleField[x][y] = 'A';
				y++;
			}
		break;
	case 4:// left	
		for (i = 0; i < 5; i++) {
				battleField[x][y] = 'A';
				y--;
			}
		break;
	default:
		break;
	}// end switch
}// end placeAircraftCarrier

void placeCruiser(char battleField[11][11]) {
	int x, y, z, i, temp;
	char collision;

	srand((unsigned)time(NULL));

	// test if ship placement is possible
	do {
		collision = 'N';
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		z = (rand() % 4) + 1;
		if (z == 1) {
			temp = x;
			for (i = 0; i < 2; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 1

		else if (z == 2) {
			temp = x;
			for (i = 0; i < 2; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 2

		else if (z == 3) {
			temp = y;
			for (i = 0; i < 2; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 3

		else if (z == 4) {
			temp = y;
			for (i = 0; i < 2; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 4
	} while (collision != 'N');
	// place the ships

	switch (z) {
	case 1:// down
		if (collision == 'N') {
			for (i = 0; i < 2; i++) {
				battleField[x][y] = 'C';
				x++;
			}
		}
		break;
	case 2:// up
		if (collision == 'N') {
			for (i = 0; i < 2; i++) {
				battleField[x][y] = 'C';
				x--;
			}
		}
		break;
	case 3:// right
		if (collision == 'N') {
			for (i = 0; i < 2; i++) {
				battleField[x][y] = 'C';
				y++;
			}
		}
		break;
	case 4:// left
		if (collision == 'N') {
			for (i = 0; i < 2; i++) {
				battleField[x][y] = 'C';
				y--;
			}
		}
		break;
	default:
		break;

	}// end switch
}// end placeCruiser

void placeBattleship(char battleField[11][11]) {
	int x, y, z, i, temp;
	char collision;

	srand((unsigned)time(NULL));

	// test if ship placement is possible
	do {
		collision = 'N';
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		z = (rand() % 4) + 1;
		if (z == 1) {
			temp = x;
			for (i = 0; i < 4; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 1

		else if (z == 2) {
			temp = x;
			for (i = 0; i < 4; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 2

		else if (z == 3) {
			temp = y;
			for (i = 0; i < 4; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 3

		else if (z == 4) {
			temp = y;
			for (i = 0; i < 4; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 4
	} while (collision != 'N');
	// place the ships

	switch (z) {
	case 1:// down
		if (collision == 'N') {
			for (i = 0; i < 4; i++) {
				battleField[x][y] = 'B';
				x++;
			}
		}
		break;
	case 2:// up
		if (collision == 'N') {
			for (i = 0; i < 4; i++) {
				battleField[x][y] = 'B';
				x--;
			}
		}
		break;
	case 3:// right
		if (collision == 'N') {
			for (i = 0; i < 4; i++) {
				battleField[x][y] = 'B';
				y++;
			}
		}
		break;
	case 4:// left
		if (collision == 'N') {
			for (i = 0; i < 4; i++) {
				battleField[x][y] = 'B';
				y--;
			}
		}
		break;
	default:
		break;

	}// end switch
}// end placeBattleship

void placeSubmarine(char battleField[11][11]) {
	int x, y, z, i, temp;
	char collision;

	srand((unsigned)time(NULL));

	// test if ship placement is possible
	do {
		collision = 'N';
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		z = (rand() % 4) + 1;
		if (z == 1) {
			temp = x;
			for (i = 0; i < 3; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 1

		else if (z == 2) {
			temp = x;
			for (i = 0; i < 3; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 2

		else if (z == 3) {
			temp = y;
			for (i = 0; i < 3; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 3

		else if (z == 4) {
			temp = y;
			for (i = 0; i < 3; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 4
	} while (collision != 'N');
	// place the ships

	switch (z) {
	case 1:// down
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'S';
				x++;
			}
		}
		break;
	case 2:// up
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'S';
				x--;
			}
		}
		break;
	case 3:// right
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'S';
				y++;
			}
		}
		break;
	case 4:// left
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'S';
				y--;
			}
		}
		break;
	default:
		break;

	}// end switch
}// end placeSubmarine

void placeDestroyer(char battleField[11][11]) {
	int x, y, z, i, temp;
	char collision;


	// test if ship placement is possible
	do {
		collision = 'N';
		srand((unsigned)time(NULL));
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		z = (rand() % 4) + 1;
		if (z == 1) {
			temp = x;
			for (i = 0; i < 3; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 1

		else if (z == 2) {
			temp = x;
			for (i = 0; i < 3; i++) {
				if (battleField[temp][y] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 2

		else if (z == 3) {
			temp = y;
			for (i = 0; i < 3; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp++;
				collision = 'N';
			}
		}// end if case 3

		else if (z == 4) {
			temp = y;
			for (i = 0; i < 3; i++) {
				if (battleField[x][temp] != 'W') {
					collision = 'Y';
					break;
				}
				temp--;
				collision = 'N';
			}
		}// end if case 4
	} while (collision != 'N');
	// place the ships

	switch (z) {
	case 1:// down
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'D';
				x++;
			}
		}
		break;
	case 2:// up
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'D';
				x--;
			}
		}
		break;
	case 3:// right
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'D';
				y++;
			}
		}
		break;
	case 4:// left
		if (collision == 'N') {
			for (i = 0; i < 3; i++) {
				battleField[x][y] = 'D';
				y--;
			}
		}
		break;
	default:
		break;

	}// end switch

}// end placeDestroyer

void reset(char battleField[11][11]) {
	int i, j;

	for (i = 1; i < 11; i++) {
		for (j = 1; j < 11; j++)
			battleField[i][j] = 'W';
	}
}// end reset
