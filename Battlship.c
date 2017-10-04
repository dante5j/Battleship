//*******************************************
//*************Battleship - Exam 2***********
//**Written by - Steve, Jeremy, and Daniela**
//**********Due Sunday October 8th***********
//*******************************************

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH myFlush()
#include <stdio.h>
#include <stdlib.h>

void displayGrid(char grid[11][11]);

int main() {
	char grid[11][11] = {
	{'0',  '1', '2', '3', '4', '5', '6', '7', '8', '9', '10'},
	{'1',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'2',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'3',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'4',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'5',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'6',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'7',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'8',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'9',  '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	{'10', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
	};
	int choice = 0;

	printf("*****BATTLESHIP*****\n\n");
	printf("1. New Game.\n");
	printf("2. Show high scores.\n");
	printf("3. quit.\n");
	scanf("%i", &choice);

	switch (choice) {
	case 1:

		break;

	case 2:

		break;

	case 3:
		CLS;
		printf("Thank you for playing!\n\n");
		PAUSE;
		exit(-1);
		break;

	default:
		CLS;
		printf("ERROR - INVALID ENTRY.\n");
		PAUSE;
		main();
	}
	PAUSE;
}//End Main

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

