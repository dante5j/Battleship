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



// Prototype functions here
char crusorPlacer(char *battleField[10][10]);
char aircraftCarrierPlacer(char *battleField[10][10]);
char battleshipPlacer(char *battleField[10][10]);
char submarinePlacer(char *battleField[10][10]);
char destroyerPlacer(char *battleField[10][10]);



main() {
	char battleField[10][10];
	srand((unsigned)time(0));
	int x;
	int y;
	int z;
	int i;
	int j;

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			battleField[i][j] = 'W';

		}

	}

	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	printf("the random number are %i , %i and %i", x,y,z);
	printf("\n");
	printf("\n");

	 destroyerPlacer( battleField);


	for (i = 0; i<10; i++)
	{
		for (j = 0; j<10; j++)
		{
			printf(" ");
			printf("%c",battleField[i][j]);
			printf(" ");
		}
		printf("\n");

	}


	battleField[10][10]=  crusorPlacer( &battleField[10][10]);
	battleField[10][10] = aircraftCarrierPlacer( &battleField[10][10]);
	battleField[10][10] = battleshipPlacer( &battleField[10][10]);
	battleField[10][10] = submarinePlacer( &battleField[10][10]);
	battleField[10][10] = destroyerPlacer( &battleField[10][10]);

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



char crusorPlacer(char *battleField[10][10]) {
	int x;
	int y;
	int z;
	srand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	battleField[x][y] = 'S';
	printf("the random number are %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");
	if (z == 1) {

	}
	else if (z == 2) {

	}
	else if (z == 3) {
	}
	else if (z == 4) {
	}
	return battleField[10][10];
}
char aircraftCarrierPlacer(char *battleField[10][10]) {
	int x;
	int y;
	int z;
	srand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	battleField[x][y] = 'S';
	printf("the random number are %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");
	if (z == 1) {

	}
	else if (z == 2) {

	}
	else if (z == 3) {
	}
	else if (z == 4) {
	}
	return battleField[10][10];
}
char battleshipPlacer(char *battleField[10][10]) {
	int x;
	int y;
	int z;
	srand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	battleField[x][y] = 'S';
	printf("the random number are %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");
	if (z == 1) {

	}
	else if (z == 2) {

	}
	else if (z == 3) {
	}
	else if (z == 4) {
	}
	return battleField[10][10];

}
char submarinePlacer(char *battleField[10][10]) {
	int x;
	int y;
	int z;
	srand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	battleField[x][y] = 'S';
	printf("the random number are %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");
	if (z == 1) {

	}
	else if (z == 2) {

	}
	else if (z == 3) {
	}
	else if (z == 4) {
	}
	return battleField[10][10];

}
char destroyerPlacer(char battleField[10][10]) {
	int x;
	int y;
	int z;
	srand((unsigned)time(0));
	x = (rand() % 9) + 1;
	y = (rand() % 9) + 1;
	z = (rand() % 4) + 1;
	battleField[x][y] = 'S';
	printf("the random number are %i , %i and %i", x, y, z);
	printf("\n");
	printf("\n");
	if (z == 1) {

	}
	else if (z == 2) {

	}
	else if (z == 3) {
	}
	else if (z == 4) {
	}
	return battleField[10][10];

}