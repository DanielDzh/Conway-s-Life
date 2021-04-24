#include "header.h"

void rules(COORD *pos, COORD *pos2){
			int indicatBlink = 0;
			system("cls");
			pos->X = 53, pos->Y = 6;
			pos2->X = 64, pos2->Y = 8;
			ramka(*pos, *pos2);

			while(indicatBlink != 20){
				indicatBlink++;
				if(indicatBlink%2 == 0){
					Delet(54, 7, *pos, hConsole);
					printf("Game rules");
				}
				else{
					Delet(54, 7, *pos, hConsole);
					printf("          ");	
				}
				Delet(45, 9, *pos, hConsole);
				printf("____________________________");
				Delet(14, 11, *pos, hConsole);
				printf("%c The game 'Life' takes place on the cellular field, which is traditionally called the 'universe' %c\n", -7, -7);

				Delet(43, 13, *pos, hConsole);
				printf("%c Each cell can be alive or dead %c\n", -7, -7);
				
				Delet(32, 15, *pos, hConsole);
				printf("%c Generations change synchronously according to simple rules: %c\n", -7, -7);
	
				Delet(17, 17, *pos, hConsole);
				printf("%c in an empty (dead) cell, next to which there are exactly three living cells, life is born; %c\n", -7, -7);

				Delet(15, 19, *pos, hConsole);
				printf("%c if a living cell has two or three living neighbors, then this cell continues to live; otherwise %c\n", -7, -7);

				Delet(2, 21, *pos, hConsole);
				printf("%c (if there are fewer than two or more than three neighbors) the cell dies ('from loneliness' or 'from overpopulation').) %c \n", -7, -7);
		
				Sleep(400);
			}
			Delet(47, 23, *pos, hConsole);
			SetConsoleTextAttribute(hConsole, BR | BB | BG | BI);
			printf("PRESS ANY KEY TO EXIT");
			getch();
}
