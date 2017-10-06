/**********************************************************/
/*** Name: Daniela Ciro ***********************************/
/*** Date: 6/8/2017 ***************************************/
/*** Purpose: battleship***********************************/
/**********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH myFlush()
#include <time.h>



main() {
	char battleField[11][11];
//********** MAKING BOARD AND FILLING WITH "W" FOR WATER *********************************************************************************************
	srand((unsigned)time(NULL));
	int x;
	int y;
	int z;
	int i;
	int j;
	int temp = 0;

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			battleField[i][j] = 'W';

		}

	}
//********** PLACEMNT OF FIRST SHIP *********************************************************************************************

	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	


	battleField[x][y] = 'C';

	printf("the PLACEMNT OF FIRST SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");

	}


	switch (z) {
	case 1:
		if(battleField[x + 1][y] == 'W')
		battleField[x + 1][y] = 'C';
		else if(battleField[x - 1][y] == 'W')
			battleField[x - 1][y] = 'C';
		else if (battleField[x][y+1] == 'W')
			battleField[x][y+1] = 'C';
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

	printf("the PLACEMNT OF FIRST SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
//********** PLACEMNT OF SECOND SHIP *********************************************************************************************
	rand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;


	if(battleField[x][y] == 'W'){
	battleField[x][y] = 'A';
	}
	else if(battleField[x+1][y] == 'W' && battleField[x + 1][y] != NULL){
		x++;
		battleField[x][y] = 'A';
	}
	else if (battleField[x][y+1 ] == 'W' && battleField[x][y+1] != NULL) {

		y++;
		battleField[x][y] = 'A';
	}
	printf("the PLACEMNT OF SECOND SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");
	}
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

			else if (battleField[x+1][y] == 'W') {
				battleField[x+1][y] = 'A';
				x++;
			}
			else if (battleField[x-1][y] == 'W') {
				battleField[x-1][y] = 'A';
				x--;
			}			
		}
		break;
	default:
		break;
	}
	printf("the PLACEMNT OF THIRD SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");
	}


//********** PLACEMNT OF THIRD SHIP *********************************************************************************************
	rand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	
	printf("the PLACEMNT OF THIRD SHIP are %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

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
	printf("the PLACEMNT OF THIRD SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");
	}
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

//********** PLACEMNT OF FORTH SHIP *********************************************************************************************
	rand((unsigned)time(0));
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
	printf("the PLACEMNT OF FORTH SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");

	}

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

//********** PLACEMNT OF FITH SHIP *********************************************************************************************
	rand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	printf("the PLACEMNT OF FITH SHIP are %i , %i and %i", x, y, z);
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
	printf("the PLACEMNT OF FITH SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");
	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");
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
	printf("the PLACEMNT OF FITH SHIP %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c", battleField[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	PAUSE;
} // end of main