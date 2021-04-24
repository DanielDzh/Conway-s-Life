#include "header.h"

void mainMenu(COORD *pos, COORD *pos2, int *x, int *y, char *keyMenu, char *keyChoice){
		system("color 8F");
		pos->X = 49, pos->Y = 6; 
		pos2->X = 56, pos2->Y = 8;
		ramka(*pos, *pos2);
		pos->X = 39, pos->Y = 10;
		pos2->X = 65, pos2->Y = 15;
		ramka(*pos, *pos2);
		Delet(50, 7, *pos, hConsole);
		SetConsoleTextAttribute(hConsole, BR | BI | BG);
		printf(" MENU \n");
		Delet(40, 11, *pos, hConsole);
		SetConsoleTextAttribute(hConsole, BR);
		printf("          1.Play         \n");
		Delet(40, 12, *pos, hConsole);
		SetConsoleTextAttribute(hConsole, BG);
		printf("       2.Game rules      \n");
		Delet(40, 13, *pos, hConsole);
		SetConsoleTextAttribute(hConsole, BB | BG);
		printf("     3.Ready universes   \n");
		Delet(40, 14, *pos, hConsole);
		SetConsoleTextAttribute(hConsole, BR | BG);
		printf("          4.Exit         \n");
		*x = 40; *y = 10;
		Delet(*x, *y, *pos, hConsole);
		*keyMenu = getch();
		
		while(*keyMenu != 13){
			if(*keyMenu == 63 || *keyMenu == 115){
				*y = *y + 1;
				Delet(*x, *y, *pos, hConsole);
				if(*y == 11){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("          1.Play         \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 49;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR);
					printf("          1.Play         \n");
				}
				else if(*y == 12){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("       2.Game rules      \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 50;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BG);
					printf("       2.Game rules      \n");
				}
				else if(*y == 13){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("     3.Ready universes   \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 51;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BB | BG);
					printf("     3.Ready universes   \n");
				}
				else if(*y == 14){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("          4.Exit         \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 52;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR | BG);
					printf("          4.Exit         \n");
				}
				else if(*y > 14){
					*y = *y - 4;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("          1.Play         \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 49;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR);
					printf("          1.Play         \n");
				}
			}
			else if(*keyMenu == -26 || *keyMenu == 119){
				*y = *y - 1;
				Delet(*x, *y, *pos, hConsole);
				if(*y == 11){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("          1.Play         \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 49;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR);
					printf("          1.Play         \n");
				}
				else if(*y == 12){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("       2.Game rules      \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 50;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BG);
					printf("       2.Game rules      \n");
				}
				else if(*y == 13){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("     3.Ready universes   \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 51;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BB | BG);
					printf("     3.Ready universes   \n");
				}
				else if(*y == 14){
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("          4.Exit         \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 52;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR | BG);
					printf("          4.Exit         \n");
				}
				else if(*y < 11){
					*y = *y + 4;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR | BB | BG | BI | FI);
					printf("          4.Exit         \n");
					*keyMenu = getch();
					if(*keyMenu == 13) *keyChoice = 49;
					Delet(*x, *y, *pos, hConsole);
					SetConsoleTextAttribute(hConsole, BR | BG);
					printf("          4.Exit         \n");
				}
			}
			else{
				*keyMenu = getch();
			}
		}
		system("color 80");
}
