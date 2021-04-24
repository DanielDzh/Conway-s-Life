#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <String.h>
#include <Windows.h>
#include <TIME.H>
#include <locale.h>

void ramka(COORD left, COORD right);
void cursorOff();
void cursorOn();
void Delet(int x, int y, COORD pos, HANDLE hConsole);
void Random(int height, int width, float time, int **matr, int **matr2, COORD position, HANDLE hConsole);
void Bird(int **matr, int **matr2, COORD position, HANDLE hConsole);
void Crab(int **matr, int **matr2, COORD position, HANDLE hConsole);
void Life(int height, int width, int **matr, int **matr2, float time, COORD position, HANDLE hConsole);
void MotionButtons(int height, int width);
void Attribut(int *height, int *width, float *time, COORD *pos, COORD *pos2);
void zeroing(COORD *pos, COORD *pos2, char *keyChoice, char *keyMoving, char *keyMenu);
void mainMenu(COORD *pos, COORD *pos2, int *x, int *y, char *keyMenu, char *keyChoice);
void playMenu(int *height, int *width, float *time, int **matr, int **matr2, int *x, int *y, COORD *pos, COORD *pos2, int *y2, char *keyMoving);
void rules(COORD *pos, COORD *pos2);
void menuReadyUniverses(int **matr, int **matr2, COORD *pos, COORD *pos2, char *keyMoving, int *y, int *x, char *keyChoice);


enum ConsoleColor {
FB = FOREGROUND_BLUE,
FG = FOREGROUND_GREEN,
FR = FOREGROUND_RED,
FI = FOREGROUND_INTENSITY,
BB = BACKGROUND_BLUE,
BG = BACKGROUND_GREEN,
BR = BACKGROUND_RED,
BI = BACKGROUND_INTENSITY
};

HANDLE hConsole;
COORD pos, pos2;
