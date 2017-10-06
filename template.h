#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH myFlush()
#define BOARDSIZE 11

void myFlush() {
	while (getchar() != '\n');
}// end myFlush
