//*******************************************
//*************Battleship - Exam 2***********
//**Written by - Steve, Jeremy, and Daniela**
//**********Due Sunday October 8th***********
//*******************************************

#include "template.h"

void displayMenu();
void displayGrid(char grid[11][11]);
char getChoice();

int main() {
	char grid[11][11] = {
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
			displayGrid(grid);
			break;
		case 'C':
			break;
		case 'H':
			break;
		case 'Q':
			printf("Thanks for playing!\n\n");
		default:
			printf("ERROR - INVALID ENTRY.\n");
			PAUSE;
		}// end switch
	} while (choice != 'Q');
	PAUSE;
}//End Main

void displayMenu(){
	CLS;
	printf("*****BATTLESHIP*****\n\n");
	printf("[N]ew Game.\n");
	printf("[C]ontinue");
	printf("[H]igh scores.\n");
	printf("[Q]uit.\n\n");
	printf("Enter selection: ");
}// end displayMenu

void displayGrid(char grid[11][11]) {
	int i = 0;
	int j = 0;

	for (i = 0; i < 11; i++) {
		printf("\n");
		for (j = 0; j < 11; j++) {
			printf(" %c ", grid[i][j]);
		}
	}   printf("\n");
}//End displayGrid

char getChoice() {
	char result;
	scanf("%c", &result); FLUSH;
	toupper(result);
	return result;
}// end getChoice
