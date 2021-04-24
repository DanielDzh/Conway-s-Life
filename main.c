#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	cursorOff();
	int **matr, **matr2;
	char keyChoice, keyMoving, keyMenu;
	srand(time(NULL));
	COORD pos, pos2;									
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int height, width, y2, x, y;
	float time;
	
	while(1){
		zeroing(&pos, &pos2, &keyChoice, &keyMoving, &keyMenu);

		mainMenu(&pos, &pos2, &x, &y, &keyMenu, &keyChoice);
		if(keyChoice == 49){
	 		playMenu(&height, &width, &time, matr, matr2, &x, &y, &pos, &pos2, &y2, &keyMoving);
		}
		if(keyChoice == 50){
			rules(&pos, &pos2);
		}
		if(keyChoice == 51){
			menuReadyUniverses(matr, matr2, &pos, &pos2, &keyMoving, &y, &x, &keyChoice);
			
			if(keyChoice == 49){
				Random(height, width, time, matr, matr2, pos, hConsole);
			}
			if(keyChoice == 50){
				Bird(matr, matr2, pos, hConsole);
			}
			if(keyChoice == 51){
				Crab(matr, matr2, pos, hConsole);
			}
		}
		if(keyChoice == 52){
			system("cls");
			break;
		}
		system("cls");
	}
}

