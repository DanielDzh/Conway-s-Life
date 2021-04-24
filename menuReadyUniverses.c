#include "header.h"

void menuReadyUniverses(int **matr, int **matr2, COORD *pos, COORD *pos2, char *keyMoving, int *y, int *x, char *keyChoice){

			system("cls");
			pos->X = 49, pos->Y = 6;
			pos2->X = 67, pos2->Y = 8;
			ramka(*pos, *pos2);
			pos->X = 39, pos->Y = 10;
			pos2->X = 76, pos2->Y = 14;
			ramka(*pos, *pos2);
			Delet(50, 7, *pos, hConsole);
			SetConsoleTextAttribute(hConsole, BR | BI | BG);
			printf(" Ready universes ");
			Delet(40, 11, *pos, hConsole);
			SetConsoleTextAttribute(hConsole, BR);
			printf("          1.Random universe         \n");
			Delet(40, 12, *pos, hConsole);
			SetConsoleTextAttribute(hConsole, BG);
			printf("                2.Bird              \n");
			Delet(40, 13, *pos, hConsole);
			SetConsoleTextAttribute(hConsole, BB | BG);
			printf("                3.Crab              \n");
			Delet(40, 10, *pos, hConsole);
			*keyMoving = getch();
			
			while(*keyMoving != 13){
				if(*keyMoving == 63 || *keyMoving == 115){
					*y = *y + 1;
					Delet(*x, *y, *pos, hConsole);
					if(*y == 11){
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("          1.Random universe         \n");
					*keyMoving = getch();
					if(*keyMoving == 13) *keyChoice = 49;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR);
					printf("          1.Random universe         \n");
					}
					else if(*y == 12){
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("                2.Bird              \n");
						*keyMoving = getch();
						if(*keyMoving == 13) *keyChoice = 50;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BG);
						printf("                2.Bird              \n");
					}
					else if(*y == 13){
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("                3.Crab              \n");
						*keyMoving = getch();
						if(*keyMoving == 13) *keyChoice = 51;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BB | BG);
						printf("                3.Crab              \n");
					}
					else if(*y > 13){
						*y = *y - 3;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("          1.Random universe         \n");
						*keyMoving = getch();
						if(*keyMoving == 13) *keyChoice = 49;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BR);
						printf("          1.Random universe         \n");
					}
				}
				else if(*keyMoving == -26 || *keyMoving == 119){
					*y = *y - 1;
					Delet(*x, *y, *pos, hConsole);
					if(*y == 11){
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("          1.Random universe         \n");
						*keyMoving = getch();
						if(*keyMoving == 13) *keyChoice = 49;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BR);
						printf("          1.Random universe         \n");
					}
					else if(*y == 12){
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("                2.Bird              \n");
						*keyMoving = getch();
						if(*keyMoving == 13) *keyChoice = 50;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BG);
						printf("                2.Bird              \n");
					}
					else if(*y == 13){
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("                3.Crab              \n");
						*keyMoving = getch();
						if(*keyMoving == 13) *keyChoice = 51;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BB | BG);
						printf("                3.Crab              \n");
					}
					else if(*y < 11){
						*y = *y + 3;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
						printf("                3.Crab              \n");
						*keyMoving = getch();
						if(*keyMoving == 13) *keyChoice = 51;
						Delet(*x, *y, *pos, hConsole);
						SetConsoleTextAttribute(hConsole, BR | BG);
						printf("                3.Crab              \n");
					}
				}
				else{
					*keyMoving = getch();
				}
	
			}
			system("color 8F");			
}
